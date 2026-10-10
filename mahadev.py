
import turtle
import math
import random

# Screen setup
screen = turtle.Screen()
screen.setup(800, 800)
screen.bgcolor("black")
screen.title("Lord Shiva - Neon Art")
screen.tracer(0)

t = turtle.Turtle()
t.hideturtle()
t.speed(0)
t.penup()

# Draw a smooth curved line using Bezier curve
def bezier(p0, p1, p2, p3, color, width=2):
    points = []

    for i in range(101):
        u = i / 100
        x = ((1-u)**3 * p0[0]
             + 3*(1-u)**2*u * p1[0]
             + 3*(1-u)*u**2 * p2[0]
             + u**3 * p3[0])

        y = ((1-u)**3 * p0[1]
             + 3*(1-u)**2*u * p1[1]
             + 3*(1-u)*u**2 * p2[1]
             + u**3 * p3[1])

        points.append((x, y))

    t.penup()
    t.goto(points[0])
    t.pencolor(color)
    t.pensize(width)
    t.pendown()

    for point in points[1:]:
        t.goto(point)

    t.penup()


def draw_line(points, color, width=2):
    t.penup()
    t.goto(points[0])
    t.pencolor(color)
    t.pensize(width)
    t.pendown()

    for point in points[1:]:
        t.goto(point)

    t.penup()


def dot(x, y, size, color):
    t.penup()
    t.goto(x, y)
    t.dot(size, color)


# ---------------------------------
# 1. FLOWING PURPLE AND CYAN HAIR
# ---------------------------------

purple = "#A52AC7"
cyan = "#00CFF5"
blue = "#087ECA"

# Left-side hair
for i in range(20):
    y = 180 - i * 13

    bezier(
        (-35, y),
        (-125, y + 20),
        (-100 - i * 2, y - 70),
        (-135 - i * 2, -100 - i * 4),
        purple if i % 2 == 0 else "#70209B",
        2
    )

# Right-side hair
for i in range(20):
    y = 180 - i * 13

    bezier(
        (35, y),
        (125, y + 20),
        (100 + i * 2, y - 70),
        (135 + i * 2, -100 - i * 4),
        cyan if i % 2 == 0 else blue,
        2
    )

# Hair across the top
for i in range(10):
    y = 150 - i * 9
    w = 35 + i * 8

    bezier(
        (-w, y),
        (-w - 15, y + 65),
        (w + 15, y + 65),
        (w, y),
        purple if i < 5 else cyan,
        3
    )

# Extra flowing strands
random.seed(7)

for side in [-1, 1]:
    for i in range(20):
        start_x = side * random.randint(95, 140)
        start_y = random.randint(-100, 110)
        end_x = side * random.randint(175, 290)
        end_y = random.randint(-245, -100)
        mid_x = side * random.randint(150, 230)

        # Correct order: smaller value first
        mid_y = random.randint(-170, -40)

        color = purple if side == -1 else cyan

        bezier(
            (start_x, start_y),
            (mid_x, start_y - 35),
            (mid_x, mid_y),
            (end_x, end_y),
            color,
            1
        )


# -----------------------------
# 2. FACE OUTLINE
# -----------------------------

bezier(
    (-105, 100), (-135, 20),
    (-105, -115), (-50, -145),
    purple, 3
)

bezier(
    (-105, 100), (-65, 165),
    (-25, 150), (0, 145),
    purple, 3
)

bezier(
    (0, 145), (25, 150),
    (65, 165), (105, 100),
    cyan, 3
)

bezier(
    (105, 100), (135, 20),
    (105, -115), (50, -145),
    cyan, 3
)

# Chin
bezier(
    (-50, -145), (-25, -160),
    (25, -160), (50, -145),
    cyan, 2
)


# -----------------------------
# 3. CLOSED EYES AND EYEBROWS
# -----------------------------

# Left eyebrow
bezier(
    (-90, 75), (-65, 100),
    (-35, 100), (-18, 80),
    purple, 3
)

# Right eyebrow
bezier(
    (18, 80), (35, 100),
    (65, 100), (90, 75),
    cyan, 3
)

# Left closed eye
bezier(
    (-85, 43), (-65, 65),
    (-35, 65), (-15, 43),
    purple, 3
)

bezier(
    (-85, 43), (-60, 50),
    (-35, 50), (-15, 43),
    purple, 2
)

# Right closed eye
bezier(
    (15, 43), (35, 65),
    (65, 65), (85, 43),
    cyan, 3
)

bezier(
    (15, 43), (40, 50),
    (60, 50), (85, 43),
    cyan, 2
)


# -----------------------------
# 4. NOSE
# -----------------------------

bezier(
    (0, 85), (-2, 55),
    (-5, 25), (-22, 10),
    cyan, 3
)

bezier(
    (-22, 10), (-20, 0),
    (-8, 0), (0, 8),
    purple, 2
)

bezier(
    (0, 8), (8, 0),
    (20, 0), (22, 10),
    cyan, 2
)


# -----------------------------
# 5. LIPS
# -----------------------------

bezier(
    (-43, -25), (-25, -12),
    (-12, -18), (0, -25),
    purple, 3
)

bezier(
    (0, -25), (12, -18),
    (25, -12), (43, -25),
    cyan, 3
)

bezier(
    (-43, -25), (-25, -47),
    (25, -47), (43, -25),
    purple, 3
)

bezier(
    (-25, -32), (0, -35),
    (15, -35), (25, -32),
    cyan, 2
)


# -----------------------------
# 6. THIRD EYE
# -----------------------------

bezier(
    (0, 125), (-18, 100),
    (-14, 80), (0, 72),
    "white", 3
)

bezier(
    (0, 72), (14, 80),
    (18, 100), (0, 125),
    "white", 3
)

dot(0, 97, 9, "white")


# -----------------------------
# 7. CRESCENT MOON
# -----------------------------

# Draw the bright crescent using two arcs
t.penup()
t.goto(110, 135)
t.setheading(65)
t.pencolor("white")
t.pensize(6)
t.pendown()
t.circle(65, 250)
t.penup()

t.goto(125, 145)
t.setheading(100)
t.pencolor("black")
t.pensize(9)
t.pendown()
t.circle(48, 250)
t.penup()


# -----------------------------
# 8. GOLDEN EARRINGS
# -----------------------------

for x in [-112, 112]:
    dot(x, -30, 30, "#FFD000")
    dot(x, -30, 19, "black")
    dot(x, -48, 13, "#FFE500")
    dot(x, -48, 5, "#FFAA00")


# -----------------------------
# 9. NECK AND SHOULDERS
# -----------------------------

bezier(
    (-55, -145), (-65, -190),
    (-100, -210), (-150, -235),
    purple, 3
)

bezier(
    (55, -145), (65, -190),
    (100, -210), (150, -235),
    cyan, 3
)

bezier(
    (-150, -235), (-100, -270),
    (-45, -260), (0, -260),
    purple, 3
)

bezier(
    (0, -260), (45, -260),
    (100, -270), (150, -235),
    cyan, 3
)

# Neck details
bezier(
    (-40, -180), (-20, -210),
    (-10, -220), (0, -220),
    purple, 2
)

bezier(
    (40, -180), (20, -210),
    (10, -220), (0, -220),
    cyan, 2
)


# -----------------------------
# 10. GLOWING YELLOW NECKLACE
# -----------------------------

for i in range(41):
    x = -125 + i * 6.25
    y = -250 - 65 * math.sin(i * math.pi / 40)

    # Darker outer dot creates a simple glow effect
    dot(x, y, 19, "#8F7800")
    dot(x, y, 14, "#FFD900")
    dot(x, y, 9, "#FFF22A")


# -----------------------------
# FINISH
# -----------------------------

screen.update()
turtle.done()
