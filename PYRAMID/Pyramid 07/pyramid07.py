# Pyramid 7
for i in range(1,6):
    print((5-i)*'  ',end='')
    print(' '.join([str(j) for j in range(1,i+1)]),' '.join([str(j) for j in range(i-1,0,-1)]))
