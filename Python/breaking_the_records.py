n=int(input())
records=list(map(int,input().split()))
minimum=records[0]
maximum=records[0]
min=0
max=0
for i in range(1,n):
        if records[i]<minimum:
                minimum=records[i]
                min+=1
        elif records[i]>maximum:
                maximum=records[i]
                max+=1
print(max,min)

