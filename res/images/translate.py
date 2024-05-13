from PIL import Image
import os,sys
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


#for file in os.listdir():
#    if isfile(file) and file.endswith('.png'):
#        doStuff(file[:-4])


def main():
    filename = sys.argv[1]
    doStuff(filename[:-4])


if __name__ == "__main__":
    main()