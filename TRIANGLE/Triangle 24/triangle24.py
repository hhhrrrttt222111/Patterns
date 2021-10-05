import string
for i in range(6):
    print(i*'  ',end='')
    print(' '.join(string.ascii_uppercase[:6-i]))
