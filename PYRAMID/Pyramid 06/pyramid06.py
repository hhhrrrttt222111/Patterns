# Pyramid 6
for i in range(1,6):
    print((5-i)*'  ',end='')
    print(' '.join([str(j) for j in range(i-1,-1,-1)]),' '.join([str(j) for j in range(1,i)]))
