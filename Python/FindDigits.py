t=int(input())
for i in range(t):
    count=0
    n=int(input())
    k=n
    while n!=0:
        rem=n%10
        n=n//10
        if rem == 0:
            continue
        if k%rem == 0:
            count+=1
    print(count)
        