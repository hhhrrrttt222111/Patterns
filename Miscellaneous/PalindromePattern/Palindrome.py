'''
Pattern for N = 4
1
11
121
1221
'''

N=int(input())
i=1
while(i<=N):
    j=1
    while(j<=i):
        if i>2 and i+j not in [i+1,2*i]:
            print(2,end='')
        else:
            print(1,end='')
        j+=1
    print()
    i+=1
