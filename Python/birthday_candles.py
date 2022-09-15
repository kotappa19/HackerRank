n=int(input())
array=list(map(int,input().split()))
result=max(array)
result_count=0
for i in range(n):
	if array[i]==result:
		result_count+=1
print(result_count)
