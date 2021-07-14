#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ii pair<int,int>
#define vll vector<ll>
#define mod 1000000007
#define pb push_back
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second

priority_queue<ii,vector<ii>,greater<ii> > res;
vll a(100005);
vector<vector<ii> > adj;
ll d;
ll ans;

void djkstra(int s,int d){
    int m = adj.size()-1;
    vll weight(m+1,mod);

    weight[s] = 0;
    
    res.push({0,s});
    
    while(!res.empty()){
        ii p= res.top(); res.pop();
        int pp = p.S;
        
        for(auto i : adj[pp]){
            int v = i.F, wt = i.S;
            
            if(weight[v] > weight[pp] + wt){
                weight[v] = weight[pp]+wt;
                res.push({weight[v],v});
            }
        }
    }
    if(weight[d]==mod)
    ans=-1;
    else
    ans=weight[d];
    return ;
}
int main(){
    int n;
    cin>>n;
    int x,y,wt;
    fo(i,0,n-1){
        cin>>x;
        a[x] = i;
        a[x]++;
    }
    adj.resize(n+1);
    int nn;
    cin>>nn;
    fo(i,0,nn-1){
        cin>>x>>y>>wt;
        adj[a[x]].pb({a[y],wt});
    }
    int s;
    cin>>s>>d;
    djkstra(a[s],a[d]);
    adj.clear();
    a.clear();
    cout<<ans;
    
}