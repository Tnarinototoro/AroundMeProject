import os
import sys

sys.path.insert(0, r"C:\Users\happyelements\AppData\Local\Temp\pixelart\pixel-art-studio\scripts")
from pixelstudio import Sprite, ramp

OUT = r"S:\AroundMeProject\_pixelart_probe"
os.makedirs(OUT, exist_ok=True)

BODY = ramp("#5be8ff", 5)      # 闈掕摑涓讳綋
GLOW = ramp("#ff5bd0", 4)      # 鍝佺孩鑳介噺
INK = "#141322"
WHITE = "#f4f7ff"
DEEP = "#2a1f3d"

pal = BODY + GLOW + [INK, WHITE, DEEP]
s = Sprite(32, 32, palette=pal)


def draw(bob, wave):
    s.clear()
    # 瑙﹂』锛? 鏉★紝闅?wave 宸﹀彸鎽嗭級
    for i, x in enumerate((11, 14, 18, 21)):
        d = (1 if (i + wave) % 2 == 0 else -1)
        for k in range(6):
            s.px(x + d * (k // 2), 21 + k, BODY[1] if k < 4 else BODY[0])
    # 涓讳綋
    s.ellipse(8, 8 + bob, 24, 22 + bob, BODY[2])
    s.ellipse(9, 9 + bob, 22, 19 + bob, BODY[3], only="opaque")     # 椤堕儴鍙楀厜
    s.ellipse(10, 17 + bob, 20, 21 + bob, BODY[1], only="opaque")   # 搴曢儴闃村奖
    # 鑳介噺鏍?    s.circle(16, 15 + bob, 3, GLOW[2])
    s.circle(16, 14 + bob, 1, GLOW[3])
    # 鐪肩潧
    s.rect(11, 12 + bob, 13, 14 + bob, WHITE)
    s.rect(18, 12 + bob, 20, 14 + bob, WHITE)
    s.px(12, 13 + bob, INK)
    s.px(13, 13 + bob, INK)
    s.px(19, 13 + bob, INK)
    s.px(20, 13 + bob, INK)
    # 澶╃嚎
    s.line(16, 8 + bob, 16, 4 + bob, INK)
    s.circle(16, 3 + bob, 1, GLOW[3])
    # 鎻忚竟锛堝悜鍐咃級
    s.outline(INK, where="inside")


for i, (bob, wave) in enumerate(((0, 0), (-1, 1), (0, 2), (1, 1))):
    if i > 0:
        s.add_frame(copy=False)
    draw(bob, wave)

for i in range(1, s.n_frames + 1):
    s.use(frame=i)
    s.set_duration(120)

s.tag("idle", 1, 4)
s.preview(os.path.join(OUT, "pet_preview.png"), scale=8)
s.save_png(os.path.join(OUT, "pet_32.png"))
s.save_gif(os.path.join(OUT, "pet_idle.gif"), scale=6)
sheet = s.save_spritesheet(os.path.join(OUT, "pet_sheet.png"), scale=1,
                           json_path=os.path.join(OUT, "pet_sheet.json"))
s.stats()
print("frames:", s.n_frames)
print("sheet:", sheet)
print("colors used:", len(s.used_colors(all_frames=True)))
print("outdir:", OUT)
for f in sorted(os.listdir(OUT)):
    print(" ", f, os.path.getsize(os.path.join(OUT, f)))

