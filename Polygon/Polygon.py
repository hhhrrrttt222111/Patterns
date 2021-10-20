import turtle
 
t = turtle.Turtle()
numberOfSides = int(input('Enter the number of sides of a polygon: '))
lengthOfSide = int(input('Enter the length of a side of a polygon: '))
exteriorAngle = 360/numberOfSides
for i in range(numberOfSides):
   t.forward(lengthOfSide)
   t.right(exteriorAngle)