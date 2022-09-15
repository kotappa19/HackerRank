n=int(input())
a=list(map(int,input().split()))
res=[]
count=len(a)
for i in range(n):
    res.append(count)
    a.remove(min(a))
print(res)
    