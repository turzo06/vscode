n=int(input())
d={}
for _ in range(n):
    s=input()
    if s not in d:
        d[s]=0
    d[s]+=1
mx=0
st=str()
for i,j in d.items():
    if j>mx:
        mx=j
        st=i
print(st)
