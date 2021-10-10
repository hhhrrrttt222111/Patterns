from math import sqrt

def circle(radius):
    pixels = [[' ' for x in range(2*radius+1)] for y in range(2*radius+1)]
    y = radius
    x = 0
    max = (radius + 0.5)**2
    while x <= y:
        pixels[radius+y][radius+x] = '#'
        pixels[radius+y][radius-x] = '#'
        pixels[radius-y][radius+x] = '#'
        pixels[radius-y][radius-x] = '#'
        pixels[radius+x][radius+y] = '#'
        pixels[radius+x][radius-y] = '#'
        pixels[radius-x][radius+y] = '#'
        pixels[radius-x][radius-y] = '#'
        x += 1
        if x*x + y*y >= max:
            y -= 1

    return '\n'.join([''.join([v for v in row]) for row in pixels])

print(circle(11))