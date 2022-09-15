n=int(input())
a=list(map(int,input().split()))
l=list(set(a))
d = {}
for i in range(0,len(l)):
    d[l[i]] = a.count(l[i])
elem = max(d.values())
for ele in d:
    if (d[ele] == elem):
        print(ele)
        break;