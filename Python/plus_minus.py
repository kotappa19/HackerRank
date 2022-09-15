n=int(input())
array=list(map(int,input().split()))
poscount=0
negcount=0
zerocount=0
for i in range(n):
	if array[i]>0:
		poscount+=1
	elif array[i]==0:
		zerocount+=1
	else:
		negcount+=1
print("%.6f"%(poscount/n))
print("%.6f"%(negcount/n))
print("%.6f"%(zerocount/n))
