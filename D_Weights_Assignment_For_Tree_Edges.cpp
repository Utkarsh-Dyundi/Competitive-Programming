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
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second
#define tc ll t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
#define full(v) v.begin(),v.end()
ll ans=0;
void dfs(vector<vll>& adj,map<ll,ll>& m, ll root){
    for(auto i:adj[root]){
        if(m[i]<m[root]){
            //cout<<i<<" "<<root<<" ";
            ans=-1;
            break;
        }
        dfs(adj,m,i);
    }
    return ;
}
int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vll b;
    forin(b,x,n);
    vector<vll> adj(n+1);
    ll root;
    fo(i,0,n-1){
          if(i+1==a[i]){
              root=a[i];
          }
          else{
              adj[a[i]].pb(i+1);
          }
    }
    map<ll,ll> m;
    fo(i,0,n-1){
        m[b[i]]=i;
    }
    ans=0;
    dfs(adj,m,root);
    if(ans==-1){
    cout<<ans<<"\n";
    continue;
    }
    vll res(n+1,0);
    vll wt(n+1,0);
    fo(i,1,n-1){
        ll d=wt[b[i-1]]-wt[a[b[i]-1]];
        res[b[i]]=d+1;
        wt[b[i]]=d+1+wt[a[b[i]-1]];
    }
    fo(i,1,n){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

return 0;
}