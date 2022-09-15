import math
n=int(input())
array=list(map(int,input().split()))
list_sum=sum(array)
result=[]
for i in range(n):
	result.append(list_sum-array[i])
print(min(result),max(result))
