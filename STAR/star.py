# Asterisk pattern

# Reading number of row
n = int(input('Enter the value of n: '))

for i in range(1,2*n):
    for j in range(1,2*n):
      #diagonally or midway of the row and column setup
        if j==n or i==j or i+j==2*n or i==n:
            print('*', end=' ')
        else:
            print(' ', end=' ')
    print()
