t=int(input())
while(t>0):
    h=1
    n=int(input())
    for i in range(n):
        if i%3==0 and i>0:
            h+=2
        else:
            h+=1
    print(h)
    t-=1