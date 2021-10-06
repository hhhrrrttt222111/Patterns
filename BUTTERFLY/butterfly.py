n = int(input())
# upper half of the pattern
for i in range(n):
    for j in range(2*n):
        if(i >= j):  # upper left triangle
            print("*", end="")
        else:
            print(" ", end="")
        if(i >= (2 * n - 1) - j):  # upper right triangle
            print("*", end="")
        else:
            print(" ", end="")
    print("")

# bottom half of the pattern
for i in range(n):
    for j in range(2*n):
        if(i + j <= n - 1):  # bottom left triangle
            print("*", end="")
        else:
            print(" ", end="")
        if((i + n) <= j):  # bottom right triangle
            print("*", end="")
        else:
            print(" ", end="")
    print(" ")
