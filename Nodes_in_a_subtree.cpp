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

vector<vector<ll>> v,adj;
vll a;
void dfs(ll x,ll y){
    v[x][a[x]]++;
    for(auto i:adj[x]){
        if(i==y)
        continue;
        dfs(i,x);
        fo(j,1,26){
             v[x][j]+=v[i][j];
        }
    }
}

int main(){
 fast

    ll n,q;
    cin>>n>>q;
     a.resize(n+1);
    v.resize(n+1,vector<ll>(27));
    string s;
    cin>>s;
    fo(i,0,n-1){
        a[i+1]=int(s[i]-'a'+1);
    }
    adj.resize(n+1);
    fo(i,1,n-1){
        // cout<<1;
        ll y,x;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(1,-1);
    // fo(i,1,n){
    //     fo(j,1,26){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    while(q--){
        ll x;
        char y;
        cin>>x>>y;
        ll k=int(y-'a'+1);
        cout<<v[x][k]<<"\n";
    }


return 0;
}