import sys
sys.path.insert(0, r"C:\Users\happyelements\AppData\Local\Temp\pixelart\pixel-art-studio\scripts")
from PIL import Image

# 把 32x32 像素图转成“文本网格”，纯文本模型不看图也能审自己的画
CHARS = " .:-=+*#%@ABCDEFGHIJKLMNOPQRSTUVWXYZ"
path = r"S:\AroundMeProject\_pixelart_probe\pet_32.png"
im = Image.open(path).convert("RGBA")
w, h = im.size
colors = {}
print(f"canvas {w}x{h}")
for y in range(h):
    row = []
    for x in range(w):
        r, g, b, a = im.getpixel((x, y))
        if a == 0:
            row.append(" ")
            continue
        key = (r, g, b)
        if key not in colors:
            colors[key] = CHARS[1 + len(colors) % (len(CHARS) - 1)]
        row.append(colors[key])
    print("".join(row))
print("\nlegend:")
for k, v in colors.items():
    print(f"  '{v}' = #{k[0]:02x}{k[1]:02x}{k[2]:02x}")
