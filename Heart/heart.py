import turtle

turtle.speed(4)
turtle.bgcolor('blue')
turtle.pensize(4)

def make():
    for i in range(200):
        turtle.right(1)
        turtle.forward(1)

turtle.color('red','pink')
turtle.begin_fill()

turtle.left(140)
turtle.forward(111)

make()
turtle.left(120)

make()
turtle.forward(111)
turtle.end_fill()

turtle.hideturtle()
turtle.done()