import turtle
import os

# Create the window
wn = turtle.Screen()
wn.title("Ping Pong")
wn.bgcolor("black")
wn.setup(width=800, height=600)
wn.tracer(0)  # animation speed

# paddle A
paddleA = turtle.Turtle()
paddleA.speed(0)
paddleA.shape("square")
paddleA.color("white")
paddleA.shapesize(stretch_wid=5, stretch_len=1)
paddleA.penup()
paddleA.goto(-350, 0)

# paddle B
paddleB = turtle.Turtle()
paddleB.speed(0)
paddleB.shape("square")
paddleB.color("white")
paddleB.shapesize(stretch_wid=5, stretch_len=1)
paddleB.penup()
paddleB.goto(350, 0)

# ball
ball = turtle.Turtle()
ball.speed(0)
ball.shape('circle')
ball.color('white')
ball.penup()
ball.goto(0, 0)
ball.dx = 0.3
ball.dy = 0.3

# score
a, b = 0, 0
pen = turtle.Turtle()
pen.speed(0)
pen.color("white")
pen.penup()
pen.goto(0, 260)
pen.write("A:{0} B:{1}".format(a, b), align="center",
          font=("Courier", 24, "normal"))

# funtions


def paddleAUp():
    y = paddleA.ycor()
    y += 20
    paddleA.sety(y)


def paddleADown():
    y = paddleA.ycor()
    y -= 20
    paddleA.sety(y)


def paddleBUp():
    y = paddleB.ycor()
    y += 20
    paddleB.sety(y)


def paddleBDown():
    y = paddleB.ycor()
    y -= 20
    paddleB.sety(y)

# keyboard binding


wn.listen()
wn.onkeypress(paddleAUp, 'w')
wn.onkeypress(paddleADown, 's')
wn.onkeypress(paddleBUp, 'Up')
wn.onkeypress(paddleBDown, 'Down')

while True:
    wn.update()

    # move the ball
    ball.setx(ball.xcor()+ball.dx)
    ball.sety(ball.ycor()+ball.dy)

    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy *= -1
    if ball.ycor() > -290:
        ball.sety(-290)
        ball.dy *= -1
    if ball.xcor() > 390:
        ball.goto(0, 0)
        ball.dx *= -1
        a += 1
        pen.clear()
        pen.write("A:{0} B:{1}".format(a, b), align="center",
                  font=("Courier", 24, "normal"))
    if ball.xcor() > -390:
        ball.goto(0, 0)
        ball.dx *= -1
        b += 1
        pen.clear()
        pen.write("A:{0} B:{1}".format(a, b), align="center",
                  font=("Courier", 24, "normal"))

    if ball.xcor() > 340 and (ball.ycor() < (paddleB.ycor()+50) and ball.ycor() > paddleB.ycor()-50):
        ball.dx *= -1

    if ball.xcor() < -340 and (ball.ycor() < (paddleA.ycor()+50) and ball.ycor() > paddleA.ycor()-50):
        ball.dx *= -1
