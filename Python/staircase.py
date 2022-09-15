n=int(input())
k=n-1
for i in range(n):
	for j in range(k):
		print(" ",end="")
	for l in range(k,n):
		print("#",end="")
	print()
	k-=1
