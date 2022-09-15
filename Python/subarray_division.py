n=int(input())
array=list(map(int,input().split()))
d,m=map(int,input().split())
sum=0
count=0
for i in range(n):
	for j in range(m):
		sum+=array[i]
	if sum==d:
		count+=1
print(count)
