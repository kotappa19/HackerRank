x,y=map(int,input().split())
list1=list(map(int,input().split()))
list2=list(map(int,input().split()))
first=list1[0]
last=list2[0]
factors=[]
flag=0
for i in range(first,last+1):
	for j in range(len(list1)):
		if i%list1[j]!=0:
			flag=1
			break
	if flag==0:
		factors.append(i)
print(factors)
