n,k=map(int,input().split())
a=list(map(int,input().split()))
big=max(a)
if big<k:
    print("0")
else:
    print(big-k)