Myfile=open("input1.txt","r")
l1=list(map(int,Myfile.readlines()))
Myfile=open("input2.txt","r")
l2=list(map(int,Myfile.readlines()))
R=[(a,b) for a in l1 for b in l2 if a>b]
mt=[[0 for i in range(4)] for j in range(4)]
for a,b in R:
    mt[a-1][b-1]=1
for x in mt:
    for e in x:
        print(e,end=' ')
    print()