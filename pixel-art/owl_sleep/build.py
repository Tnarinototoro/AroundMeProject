import json
import os
import sys

SKILL = os.path.join(os.path.expanduser("~"), ".dsh", "skills", "pixel-art-studio", "scripts")
sys.path.insert(0, SKILL)
from pixelstudio import Sprite

OUT = r"S:\AroundMeProject\pixel-art\owl_sleep"
os.makedirs(OUT, exist_ok=True)

# palette sampled from the turnaround sheet
OUTLINE = "#20202A"
BLUE = ["#304C89", "#41618F", "#527DB9", "#7FA3D2", "#A9CBEF"]      # feather coat
ICY = ["#9FB7CC", "#BFD4E4", "#D4E9F9", "#E9F4FD"]                   # face disk / belly / tail
LEA = ["#3F2A22", "#604336", "#8D6956", "#A98167"]                   # leather hood / vest
BRASS = ["#7A5423", "#BF8B42", "#D9A85E", "#F8DEA0"]
BEAK = ["#9A4A08", "#CE650B", "#F6A51D", "#FFC964"]
LENS = "#ED770B"
GEM = "#28BF3D"
BLUSH = "#EFA9CE"
PUPIL = "#123D27"
CREAM = "#F3E6CC"
WHITE = "#FFFFFF"


def zed(s, x, y, size, color):
    s.rect(x, y, x + size - 1, y, color)
    for i in range(1, size - 1):
        s.px(x + size - 1 - i, y + i, color)
    s.rect(x, y + size - 1, x + size - 1, y + size - 1, color)


def owl(s, *, breath=0, sway=0, zz=0):
    b = breath

    # ---------- tail (icy, right side, tucked)
    s.circle(106, 104, 9, ICY[1], fill=True)
    s.circle(105, 102, 6, ICY[2], fill=True, only="opaque")
    s.ellipse(100, 108, 112, 118, ICY[1], only="opaque")

    # ---------- body (short, chibi)
    s.ellipse(30, 70 + b, 112, 124 + b, BLUE[0])
    s.ellipse(32, 68 + b, 110, 122 + b, BLUE[1], only="opaque")
    s.ellipse(34, 66 + b, 106, 118 + b, BLUE[2], only="opaque")

    # ---------- belly / chest patch
    s.ellipse(40, 84 + b, 100, 122 + b, ICY[0])
    s.ellipse(42, 86 + b, 96, 118 + b, ICY[2], only="opaque")
    s.ellipse(46, 84 + b, 88, 104 + b, ICY[3], only="opaque")

    # ---------- near wing folded across the body
    s.ellipse(26, 88 + b, 78, 124 + b, BLUE[1])
    s.ellipse(28, 90 + b, 74, 120 + b, BLUE[2], only="opaque")
    s.ellipse(30, 104 + b, 62, 122 + b, BLUE[3], only="opaque")
    for i, px in enumerate((34, 42, 50, 58)):        # pointed feather tips
        s.polygon([(px, 116 + b), (px + 4, 112 + b), (px + 6, 122 + b)], BLUE[4], fill=True)
        s.px(px + 4, 120 + b, ICY[2])

    # ---------- vest + harness
    s.rect(52, 98 + b, 104, 116 + b, LEA[1])
    s.rect(52, 98 + b, 104, 102 + b, LEA[2])
    s.rect(52, 112 + b, 104, 116 + b, LEA[0])
    s.rect(56, 104 + b, 60, 112 + b, "#684451")       # plum strap
    s.rect(92, 100 + b, 96, 114 + b, "#684451")
    s.rect(70, 106 + b, 82, 108 + b, LEA[3])          # belt
    s.circle(66, 106 + b, 5, GEM, fill=True)          # green gem
    s.circle(65, 105 + b, 2, "#8CF29B", fill=True, only="opaque")
    s.rect(86, 104 + b, 92, 110 + b, BRASS[1])        # buckle
    s.rect(87, 105 + b, 91, 109 + b, BRASS[2], only="opaque")

    # ---------- head (huge, chibi: ~55% of height without tufts)
    s.circle(52, 56 + b, 35, BLUE[0], fill=True)
    s.circle(50, 54 + b, 33, BLUE[2], fill=True, only="opaque")
    s.circle(48, 50 + b, 26, BLUE[3], fill=True, only="opaque")

    # ---------- hood (leather, over the crown and back of the head)
    s.polygon([(18, 46 + b), (24, 24 + b), (46, 16 + b), (72, 18 + b), (86, 34 + b),
               (88, 52 + b), (74, 40 + b), (52, 34 + b), (30, 40 + b)], LEA[1], fill=True)
    s.polygon([(24, 28 + b), (46, 20 + b), (68, 22 + b), (80, 34 + b), (76, 34 + b),
               (60, 26 + b), (40, 26 + b), (28, 36 + b)], LEA[2], fill=True, only="opaque")
    s.polygon([(26, 44 + b), (30, 40 + b), (52, 36 + b), (74, 42 + b), (76, 46 + b),
               (52, 40 + b), (30, 48 + b)], LEA[0], fill=True, only="opaque")

    # hood tufts: two tall pointed extensions, upright with a clear notch, tips drooping (asleep)
    s.polygon([(42, 26 + b + sway), (56, 4 + b + sway), (68, 2 + b + sway),
               (72, 10 + b + sway), (58, 20 + b + sway), (50, 32 + b + sway)], LEA[1], fill=True)
    s.polygon([(62, 28 + b - sway), (80, 6 + b - sway), (92, 8 + b - sway),
               (90, 18 + b - sway), (76, 22 + b - sway), (70, 34 + b - sway)], LEA[2], fill=True)
    # dark inner edges so the two tufts read separately
    s.line(58, 20 + b + sway, 66, 8 + b + sway, LEA[0])
    s.line(74, 24 + b - sway, 86, 12 + b - sway, LEA[0])
    # cream stitching on the tufts
    for i in range(5):
        s.rect(50 + i * 8, 18 + b + (i % 2), 52 + i * 8, 19 + b + (i % 2), CREAM)

    # ---------- brass ear fittings
    s.circle(26, 58 + b, 6, BRASS[1], fill=True)
    s.circle(26, 58 + b, 3, BRASS[3], fill=True, only="opaque")
    s.circle(78, 60 + b, 6, BRASS[0], fill=True)
    s.circle(78, 60 + b, 3, BRASS[2], fill=True, only="opaque")

    # ---------- goggles resting on the forehead
    s.rect(30, 32 + b, 74, 38 + b, LEA[0])            # strap
    for cx in (40, 64):
        s.circle(cx, 35 + b, 9, BRASS[0], fill=True)
        s.circle(cx, 35 + b, 8, BRASS[1], fill=True, only="opaque")
        s.circle(cx, 35 + b, 6, LENS, fill=True, only="opaque")
        s.circle(cx - 2, 33 + b, 2, "#FFC964", fill=True, only="opaque")
    s.rect(48, 33 + b, 56, 36 + b, BRASS[0])

    # ---------- facial disk (icy)
    s.ellipse(26, 50 + b, 78, 100 + b, ICY[1])
    s.ellipse(28, 52 + b, 76, 96 + b, ICY[2], only="opaque")
    s.ellipse(30, 52 + b, 60, 82 + b, ICY[3], only="opaque")

    # ---------- closed eyes: downward arcs + lashes
    for ex in (34, 56):
        s.rect(ex, 70 + b, ex + 9, 70 + b, OUTLINE)
        s.px(ex - 1, 69 + b, OUTLINE)
        s.px(ex + 10, 69 + b, OUTLINE)
        s.px(ex + 4, 71 + b, OUTLINE)
        s.px(ex + 5, 71 + b, OUTLINE)
        s.rect(ex + 1, 66 + b, ex + 8, 66 + b, BLUE[1])   # lid crease

    # ---------- blush
    s.ellipse(26, 78 + b, 36, 86 + b, BLUSH)
    s.ellipse(64, 78 + b, 74, 86 + b, BLUSH)

    # ---------- beak: faceted diamond
    s.polygon([(46, 82 + b), (54, 82 + b), (50, 94 + b)], BEAK[1], fill=True)
    s.polygon([(44, 80 + b), (50, 80 + b), (50, 92 + b)], BEAK[2], fill=True)
    s.polygon([(50, 80 + b), (56, 80 + b), (50, 92 + b)], BEAK[1], fill=True)
    s.rect(49, 81 + b, 50, 88 + b, BEAK[3])
    s.rect(46, 90 + b, 53, 91 + b, BEAK[0])

    # ---------- feet tucked under
    for fx in (44, 86):
        s.ellipse(fx, 118 + b, fx + 16, 126 + b, BEAK[1])
        s.ellipse(fx + 1, 118 + b, fx + 15, 124 + b, BEAK[2], only="opaque")
        for t in range(3):
            s.rect(fx + 4 + t * 4, 124 + b, fx + 5 + t * 4, 126 + b, BEAK[0])

    # ---------- outline
    s.outline(OUTLINE, where="inside")

    # ---------- drifting Zzz
    zed(s, 96, 62 - zz, 4, ICY[0])
    zed(s, 105, 50 - zz, 5, ICY[1])
    zed(s, 112, 34 - zz, 6, BLUE[1])


FRAMES = [(0, 0, 0), (1, 0, 1), (2, 1, 2), (2, 0, 3), (1, -1, 4), (0, 0, 5)]

s = Sprite(128, 128, palette=[OUTLINE, LENS, GEM, BLUSH, PUPIL, CREAM, WHITE, "#684451",
                              "#8CF29B", "#FFC964"] + BLUE + ICY + LEA + BRASS + BEAK)
for i, (breath, sway, zz) in enumerate(FRAMES):
    if i > 0:
        s.add_frame(copy=False)
    owl(s, breath=breath, sway=sway, zz=zz)
    s.use(frame=i + 1)
    s.set_duration(170)

s.tag("sleep", 1, len(FRAMES))
s.save_png(os.path.join(OUT, "owl_sleep_1x.png"))
s.preview(os.path.join(OUT, "owl_sleep_preview.png"), scale=4)
s.save_silhouette(os.path.join(OUT, "owl_sleep_silhouette.png"))
s.save_gif(os.path.join(OUT, "owl_sleep_idle.gif"), scale=3)
s.save_spritesheet(os.path.join(OUT, "owl_sleep_sheet.png"), layout="grid", scale=1,
                   padding=0, json_path=os.path.join(OUT, "owl_sleep_sheet.json"))
st = s.stats(print_=False) or {}
print("[owl_sleep] frames=%s colors=%s isolated=%s semialpha=%s" % (
    s.n_frames, st.get("colors_used"), len(st.get("isolated_px") or []), st.get("semi_alpha_px")))

from PIL import Image

im = Image.open(os.path.join(OUT, "owl_sleep_1x.png")).convert("RGBA")
im2 = im.resize((64, 64), Image.NEAREST)
chars, letters, rows = {}, ".:-=+*#%@&$", []
for y in range(64):
    line = []
    for x in range(64):
        r, g, b, a = im2.getpixel((x, y))
        if a == 0:
            line.append(" ")
        else:
            k = (r, g, b)
            if k not in chars:
                chars[k] = letters[len(chars) % len(letters)]
            line.append(chars[k])
    rows.append("".join(line))
with open(os.path.join(OUT, "owl_sleep_grid.txt"), "w", encoding="utf-8") as fh:
    fh.write("\n".join(rows) + "\n")
print("legend:", {v: "#%02x%02x%02x" % k for k, v in chars.items()})
print("done")
