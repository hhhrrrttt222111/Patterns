import string
for i in range(6):
    print(i*'  ',end='')
    print((6-i)*(string.ascii_uppercase[6-i-1]+' '))
