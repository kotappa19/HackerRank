x1,v1,x2,v2=map(int,input().split())
kangaroo1count=0
kangaroo2count=0
flag=0
while ((x1<x2 and v1>v2) or (x1>x2 and v1<v2)) and kangaroo1count==kangaroo2count:
        x1+=v1
        kangaroo1count+=1
        x2+=v2
        kangaroo2count+=1
        if x1==x2 and kangaroo1count==kangaroo2count:
                flag=1
                break
if flag==1:
        print("YES")
else:
        print("NO")
