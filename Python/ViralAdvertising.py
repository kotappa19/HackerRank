n=int(input())
shared=5
cumulative=0
for i in range(1,n+1):
    liked=shared//2
    cumulative+=liked
    shared=liked*3
print(cumulative)