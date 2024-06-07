from PIL import Image
import os,sys,math
from os.path import isfile, join
import json

fontHPx = 0
fontWPx = 0
charsInPngOrder = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzĄĆĘŁŃÓŚŹŻąćęłńóśźż !~`@#$%^&*()_-+=|\\}{]["\':;?/>.<,0123456789'
desiredOrder    = ' !"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ŚŹŁĄŻĆĘŃÓśźłążćęńó'

def letterRowOfBitsToRowOfBytes(bits):
    howMuch0 = math.ceil(len(bits)/8) * 8 - len(bits)
    for _ in range(howMuch0):
        bits.append(0)

    res = []
    data = [bits[8*i:8*(i+1)] for i in range(len(bits)//8)]
    for pac in data:
        b = 0x00
        for v in pac:
            b = b<<1
            b = b|v
        res.append(b) 

    return res

def readChar(img, letterRow, letterCol):
    letter = []
    for y in range(fontHPx):
        yOffset = letterRow*fontHPx + y
        row = []
        for x in range(fontWPx):
            xOffset = letterCol*fontWPx+x
            r,g,b = img[xOffset, yOffset]
            #print(f"r{r}g{g}b{g}")
            if r+g+b > 500:
                row.append(0)
            else:
                row.append(1)
        #print(row)
        letter = letter + letterRowOfBitsToRowOfBytes(row)
    return letter

def openFile(fileName):
    im = Image.open(f'{fileName}.png')
    pix = im.convert("RGB").load()
    imgWPx,imgHpx = im.size
    return (pix, imgWPx, imgHpx)

def readPng(fileName):
    global charsInPngOrder
    global fontWPx
    global fontHPx

    pix, imgWPx,imgHpx = openFile(fileName)
    characters = {}
    count= 0
    for lineNo in range(5):
        for letterNoInLine in range(26):
            if count >= len(charsInPngOrder):
                return characters
            
            letter = readChar(pix, lineNo, letterNoInLine)
            characters[charsInPngOrder[lineNo*26+letterNoInLine]] = letter
            count = count+1
    return characters

def printBits(bits):
    for b in bits:
        for i in range(8):
            if b&(0x80 >> i):
                print('#',end='')
            else:
                print(' ',end='')

def printFont(characters):
    global desiredOrder
    global fontWPx

    offset = 0
    bytesInRow = math.ceil(fontWPx/8)
    for letter in desiredOrder:
        print(f"// @{offset} \'{letter}\' ({fontWPx} pixels wide)")
        bytes = characters[letter]
        rows = [bytes[i*bytesInRow:(i+1)*bytesInRow] for i in range(fontHPx)]
        for r in rows:
            for b in r:
                print(f"{b:#0{4}x}", end=',')
            print('\t//', end=' ')
            printBits(r)
            print('')

def main():
    global fontHPx, fontWPx
    filename = sys.argv[1]
    fontWPx = int(sys.argv[2])
    fontHPx = int(sys.argv[3])
  
    font = readPng(filename[:-4])
    printFont(font)

"""
    img,W,H = openFile(filename[:-4])
    letter = readChar(img, 3, 1)
    rowlen = len(letter)//fontHPx
    for i in range(fontHPx):
        print("|", end='')
        printBits(letter[i*rowlen:(i+1)*rowlen])
        print('|')
"""

if __name__ == "__main__":
    main()