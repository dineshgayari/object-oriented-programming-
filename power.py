import colorsys
import math
import turtle

t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
s.setup(800, 800)
t.speed(0)
t.width(2)
t.hideturtle()

h = 0

for i in range(1000):
    c = colorsys.hsv_to_rgb(h, 1, 1)
    t.pencolor(c)
    r = 220 * math.sin(math.radians(6 * i))
    x = r * math.cos(math.radians(i))
    y = r * math.sin(math.radians(i))
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.circle(2)
    h += 0.003

t.penup()
t.goto(0, -20)
t.color("white")
t.write("follow ", align="center", font=("arial", 24, "bold"))
turtle.done()