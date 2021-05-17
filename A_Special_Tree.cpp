#include<bits/stdc++.h>
using namespace std;
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define all(c) c.begin(),c.end()
#define mod 1000000007
#define itor(c) typeof(c.begin())
#define ll long long
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define ii pair<int,int>
#define sii set<ii>
#define vii vector<ii>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second
#define tc ll t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
vll u;
vector<vll> dp,VIS;
vector<vll> adj;
vector<bool> vis;
 vector<ll> stak;
void printPath(ll j)
{   ll c=0;
    for(auto i:stak){
        c++;
        dp[i][j]=c;
        VIS[i][j]=1;
    }
}
void DFS(int x,int y,ll k)
{
    stak.push_back(x);
    if (x == y) {
        printPath(k);
        return;
    }
    vis[x] = true;
    if (!adj[x].empty()) {
        for (int j = 0; j < adj[x].size(); j++) {
            if (vis[adj[x][j]] == false)
                DFS(adj[x][j], y,k);
        }
    }
    stak.pop_back();
}
void DFSCall(int x,int y,int n,ll j)
{
    vis.resize(n+1);
    fo(i,0,n){
        vis[i]=false;
    }
    DFS(x, y, j);
}

int main(){
 fast
tc{
    ll n,k,a;
    cin>>n>>k>>a;
    ll x;
    vll sp;
    forin(sp,x,k);
    adj.resize(n+1);
    dp.resize(n+1,vll(k));
    VIS.resize(n+1,vll(k));
    fo(i,0,n-2){
        ll y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ll ans=INT_MIN,res;
   
    vll a1,a2;
    vll aa;
    fo(i,0,k-1){
    DFSCall(sp[i], a, n, i);
    // aa.pb(u[u.size()-1]);
    }
    for(ll i=n;i>0;i--){
        ans=INT_MIN,res;
         fo(j,0,k-1){
             //stack.clear();
              if(VIS[i][j]!=1){
              DFSCall(sp[j], i, n, j);
              }
              ll h=dp[a][j]-dp[i][j];
              if(ans<h){
                 ans=h;
                 res=sp[j];
              }
         }
         a1.pb(ans);
         a2.pb(res);
    }
    reverse(a1.begin(),a1.end());
    reverse(a2.begin(),a2.end());
    printv(a1);
    printv(a2);
    dp.clear();
    VIS.clear();
    stak.clear();
    adj.clear();
    vis.clear();
}

return 0;
}
