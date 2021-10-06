
n = int(input("Enter n: "))
for i in range(1,n+1):
    for j in range(1,n-i+1):
        print(" ",end="")

    for k in range(1,2*i):
        print("*",end="")

    for j in range(1, 2*(n-i)+1):
        print(" ",end="")

    for l in range(3,i+1):
        print("*",end="")
    print("")


for i in range(n-1, 0, -1):
    for j in range(1,n-i+1):
        print(" ",end="")

    for k in range(1,2*i):
        print("*",end="")

    for j in range(1, 2*(n-i)+1):
        print(" ",end="")

    for l in range(3,i+1):
        print("*",end="")
    print("")
