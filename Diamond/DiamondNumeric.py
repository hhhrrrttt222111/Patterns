rows = int(input("Enter Diamond Number Pattern Rows = "))

print("====Diamond Number Pattern====")

for i in range(1, rows + 1):
    for j in range(1, rows - i + 1):
        print(end = ' ')
    for k in range(1, (2 * i)):
        print(k, end = '')
    print()

for i in range(rows - 1, 0, -1):
    for j in range(1, (rows - i + 1)):
        print(end = ' ')
    for k in range(1, (2 * i)):
        print(k, end = '')
    print()