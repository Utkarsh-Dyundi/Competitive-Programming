t=input()
t=int(t)
while(t>0):
    ans={}
    n=input()
    n=int(n)
    a=input().split()
    c=0
    res=10000000
    an=-1
    for i in range(n):
        ans[a[i]]=ans.get(a[i],0)+1
    for i in range(n):
        if ans[a[i]]==1:
          if  int(a[i])<=int(res):
              c=1
              res=a[i]
              an=i+1
    if c==0:
        print(-1)
    else:
        print(an)
    t=t-1