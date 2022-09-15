t=int(input())
while(t>0):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    count=0
    for i in range(n):
        if a[i]<=0:
            count+=1
    if  count >= k:
        print("NO")
    else:
        print("YES")
    t-=1