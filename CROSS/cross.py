# Creating cross pattern of stars

# Reading number of row
n = int(input('Enter the value of n: '))

for i in range(1, 2*n):
    for j in range(1, 2*n):
        if i == j or i+j == 2*n:
            print('*', end='')
        else:
            print(' ', end='')
    print()
