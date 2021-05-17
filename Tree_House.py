import sys
from collections import defaultdict

sys.setrecursionlimit(1000000)
m=10**9+7
vis=[]
tree=defaultdict(list)
adj=defaultdict(list)

def make_tree(i):
    vis[i]=1
    for j in adj[i]:
        if vis[j]==0:
            tree[i].append(j)
            make_tree(j)

t=int(input())
for _ in range(t):
    n, x = map(int, input().split())

    for i in range(n-1):
        u,v=map(int,input().split())
        adj[u].append(v)
        adj[v].append(u)
    a=[]
    for i in range(n+10):
        a.append(1)
        vis.append(0)
    make_tree(1)
    for i in reversed(list(tree)):
        v=[]
        for j in tree[i]:
            v.append([a[j],j])
        v.sort(reverse=True)
        h=1
        for j in v:
            a[i]+=h*a[j[1]]
            a[j[1]]*=h
            h+=1

    ans=a[1]*x
    ans=ans%m
    print(ans)
    tree.clear()
    vis.clear()
    adj.clear()
