from PIL import Image
import os,sys,math
from os.path import isfile, join

def reverse(color):
    revCol = 0
    for i in range(16):
        revCol = revCol << 1
        revCol = revCol | ((color >> i)&1)
    return revCol


def serializePart(part):
    return f'{{{part["amount"]},{part["color"]}}}'

def serializeRow(row):
    return f'{{.parts = new image_row_part_t[{len(row)}]{{{",".join([serializePart(pr) for pr in row])}}}, .partsCount={len(row)}}}'

def doLogo(fileName):
    im = Image.open(f'{fileName}.png')
    pix = im.convert("RGB").load()
    img = []
    bimg = []
    w,h = im.size

    for y in range(h):
        line = []
        img.append(line)
        for x in range(w):
            r,g,b = pix[x,y]
            if r+g+b > 60:
                line.append(1)
            else:
                line.append(0)
    for l in img:
        howMuch0 = math.ceil( len(l)/8) * 8 - len(l)
        for _ in range(howMuch0):
            l.append(0)
        data = [l[8*i:8*(i+1)] for i in range(len(l)//8)]
        for pac in data:
            b = 0x0000
            for v in pac:
                b = b<<1
                b = b|v
            bimg.append(b)       
    
    obj = {
        "h":h,
        "w":w,
        "img": bimg
    }

    print(f'mono_image_t const RouteImgs::{fileName} = ')
    print("{")
    print(f'.h = {obj["h"]},')
    print(f'.w = {obj["w"]},')
    print(f'.bytes = new uint8_t[{len(obj["img"])}]')
    print("  {")
    print(",".join([str(v) for v in obj["img"]]))
    print("  }")
    print("};")
"""
mono_image_t const Imgs::Logos::logo{
    .h = 10,
    .w = 10,
    .bytes = new uint8_t[10 * 2]{
        0b01100001, 0b10000000,
        0b01100001, 0b10000000,
        0b00011110, 0b00000000,
        0b00010010, 0b00000000,
        0b00001100, 0b00000000,
        0b01000000, 0b10000000,
        0b01110011, 0b10000000,
        0b01010010, 0b10000000,
        0b00001100, 0b00000000,
        0b00001100, 0b00000000}};
"""

def doStuff(fileName):
    im = Image.open(f'{fileName}.png')
    pix = im.convert("RGB").load()

    img = []
    w,h = im.size
    for y in range(h):
        line = []
        img.append({"line":line})
        lastColor = -1
        counter = -1
        for x in range(w):
            r,g,b = pix[x,y]
            color = ((int(r*31/255)&31)<<11) | ((int(g*63/255)&63)<<5) | (int(b*31/255)&31)
            revCol = color
            if revCol != lastColor:
                if counter > 0:
                    item = {
                        "color" : lastColor,
                        "amount" : counter
                    }
                    line.append(item)
                lastColor = revCol
                counter = 0
            counter = counter+1
        if counter > 0:
            item = {
                "color" : lastColor,
                "amount" : counter
            }
            line.append(item)

    obj = {
        "h":h,
        "w":w,
        "img": img
    }

    print(f'image_t {fileName} = ')
    print("{")
    print(f'.h = {obj["h"]},')
    print(f'.w = {obj["w"]},')
    print(f'.rows = new image_row_t[{len(obj["img"])}]')
    print("  {")
    print(",\n".join([serializeRow(row["line"]) for row in obj["img"]]))
    print("  }")
    print("};")

def main():
    filename = sys.argv[1]
    #doStuff(filename[:-4])
    doLogo(filename[:-4])


if __name__ == "__main__":
    main()