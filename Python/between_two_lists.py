x,y=map(int,input().split())
list1=list(map(int,input().split()))
list2=list(map(int,input().split()))
first=list1[0]
last=list2[0]
factors=[]
flag=0
for i in range(first,last+1):
        for j in range(x):
                if i%list1[j]==0:
                        flag=1
                else:
                        flag=0
        if flag==1:
                factors.append(i)
flag=0
result=[]
for i in range(y):
        for j in range(len(factors)):
                if list2[i]%factors[j]==0:
                        flag=1
                else:
                        flag=0
        if flag==1:
                result.append(i)
print(len(result))

