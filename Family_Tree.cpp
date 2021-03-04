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
#define printv(v) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";
vector<vll> adj;
vll w,p;
ll n;
ll ans=INT_MIN;
ll dfs(ll cur,ll par,ll m1,ll m2){
     if(par!=-1){
         ans=max(ans,abs(m1-m2));
     }
         for(auto i:adj[cur]){
             if(i==par)
             continue;
             dfs(i,cur,min(m1,w[i]),max(m2,w[i]));
         }
   return 0;
}


int main(){
 fast

    cin>>n;
    adj.resize(n+1);
    w.resize(n+1);
    p.resize(n+1);
    ll x;
    fo(i,1,n){
       cin>>w[i];
    }
    ll root;
    fo(i,1,n){
        cin>>x;
        if(x==-1){
            root=i;
            continue;
        }
        else{
            adj[i].pb(x);
            adj[x].pb(i);
        }
    }

    //ll ans;
    dfs(root,-1,w[root],w[root]);
    cout<<ans;

return 0;
}