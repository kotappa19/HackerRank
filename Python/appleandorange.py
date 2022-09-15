s,t=map(int,input().split())
a,b=map(int,input().split())
m,n=map(int,input().split())
apples=list(map(int,input().split()))
oranges=list(map(int,input().split()))
applecount=0
orangecount=0
for i in range(len(apples)):
    apples[i]+=a
    if apples[i]>=s and apples[i]<=t:
        applecount+=1
for i in range(len(oranges)):
        oranges[i]+=b
        if oranges[i] >=s and oranges[i]<=t:
            orangecount+=1
print(applecount)
print(orangecount)
        
