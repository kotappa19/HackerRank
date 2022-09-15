i,j,k=map(int,input().split())
count=0
for l in range(i,j+1):
    rev=0
    m=l
    while m!=0:
        rem=m%10
        rev=rev*10+rem
        m=m//10
    if abs(l-rev)%k == 0:
        count+=1
print(count)