n=int(input())
grades=[]
for i in range(n):
	grades.append(int(input()))
for i in range(n):
	if grades[i]>=38 and (grades[i]+1)%5==0:
		grades[i]=(grades[i]+1)
	elif grades[i]>=38 and (grades[i]+2)%5==0:
		grades[i]=(grades[i]+2)
for i in range(n):
	print(grades[i])
