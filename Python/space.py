import os
import math
import turtle
import random

wn = turtle.Screen()
wn.bgcolor("black")
wn.title("Space Inavaders")

boarderPen = turtle.Turtle()
boarderPen.speed(0)
boarderPen.color("white")
boarderPen.penup()
boarderPen.setposition(-300, -300)
boarderPen.pendown()
boarderPen.pensize(3)

for i in range(4):
    boarderPen.fd(600)
    boarderPen.lt(90)
boarderPen.hideturtle()

player = turtle.Turtle()
player.color("blue")
player.shape("triangle")
player.penup()
player.speed(0)
player.setposition(0, -250)
player.setheading(90)
playerspeed = 20

enemies = []

for i in range(5):
    enemies.append(turtle.Turtle())

for enemy in enemies:
    enemy.color('green')
    enemy.shape("circle")
    enemy.penup()
    enemy.speed(0)
    x = random.randint(-200, 200)
    y = random.randint(100, 250)
    enemy.setposition(x, y)
    enemyspeed = 3

bullet = turtle.Turtle()
bullet.color('yellow')
bullet.shape('triangle')
bullet.penup()
bullet.speed(0)
bullet.setheading(90)
bullet.shapesize(0.5, 0.5)
bullet.hideturtle()
bulletspeed = 20
bulletstate = 'ready'


def player_left():
    x = player.xcor()
    x -= playerspeed
    if x < -280:
        x = -280
    player.setx(x)


def player_right():
    x = player.xcor()
    x += playerspeed
    if x > 280:
        x = 280
    player.setx(x)


def fire():
    global bulletstate
    for enemy in enemies:
        if bulletstate == 'ready':
            bulletstate = 'fired'
            x = player.xcor()
            y = player.ycor()+10
            bullet.setposition(x, y)
            bullet.showturtle()
        while bulletstate == 'fire':
            y = bullet.ycor()
            y += bulletspeed
            bullet.sety(y)
            if bullet.ycor() > 275:
                bullet.hideturtle()
                bulletstate = 'ready'


def iscollision(t1, t2):
    distance = math.sqrt(math.pow(t1.xcor()-t2.xcor(), 2) +
                         math.pow(t1.ycor()-t2.ycor(), 2))
    if distance < 15:
        return True
    else:
        return False


wn.listen()
wn.onkeypress(player_left, 'Left')
wn.onkeypress(player_right, 'Right')
wn.onkeypress(fire, 'space')


while True:
    for enemy in enemies:
        x = enemy.xcor()
        x += enemyspeed
        enemy.setx(x)
        if enemy.xcor() > 280:
            y = enemy.ycor()
            y -= 30
            enemyspeed *= -1
            enemy.sety(y)
        if enemy.ycor() < -280:
            y = enemy.ycor()
            y -= 30
            enemyspeed *= -1
            enemy.sety(y)
        if iscollision(bullet, enemy):
                bullet.hideturtle()
                bulletstate = 'ready'
                bullet.setposition(0.-400)
                enemy.setposition(-200, 250)
            if iscollision(enemy, player):
                print("Game Over !!!")
                break

while True:
    wn.update()
