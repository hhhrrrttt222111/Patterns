for i in range(5):
    print(i*'  ',end='')
    print(' '.join([str(j) for j in range(1,5-i+1)]))
