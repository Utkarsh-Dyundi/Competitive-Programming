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
vector<vll> adj;
vector<ll> v;
void dfs(ll n, ll k){
    v[n]=1;
     ans=max(ans,k);
     for(auto i:adj[n]){
         dfs(i,k+1);
     }
}

int main(){
 fast

    ll n;
    cin>>n;
    ll x;
    vll a;
    adj.resize(n+1);
    v.resize(n+1);
    forin(a,x,n);


    fo(i,1,n){
        if(a[i-1]!=-1)
        adj[a[i-1]].pb(i);
    }
    fo(i,1,n){
    if(v[i]!=1)
       dfs(i,1);
    }
    
    cout<<ans;

return 0;
}