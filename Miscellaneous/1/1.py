for i in range(5, 0, -1):
    for j in range(65, 65+i):
        a = chr(j)
        print(a, end="")
    for k in range(5, i, -1):
        print("*", end="")
    for m in range(5, i, -1):
        print("*", end="")
    for n in range(64+i, 64, -1):
        b = chr(n)
        print(b, end="")
    print()
