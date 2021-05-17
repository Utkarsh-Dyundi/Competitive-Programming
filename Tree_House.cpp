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
vector<unsigned long long int> a,c;
ll sum=0;
vector<bool> visited;
vector<vector<ll>> tree;
void make_tree(vector<vector<ll>> adj,ll node){
	visited[node]=true;
	for(auto i:adj[node]){
		if(visited[i]==false){
			tree[node].push_back(i);
			make_tree(adj,i);
		}
	}
}
// void solve(vector<vector<ll>> adj, ll n,ll p){
//     vector<pair<ll,ll>> v;
//     for(auto i:adj[n]){
//         solve(adj,i,n);
//         v.pb({a[i],i});
//     }
//     sort(v.begin(),v.end());
//     ll j=v.size();
//     ll h=1;
//     for(int i=j-1;i>=0;i--){
//           a[n]+=h*a[v[i].S];
//          a[v[i].S]*=h;
//           h++;
//     }
// }

int main(){
 fast
tc{
    ll n,x;
    cin>>n>>x;
    ll u,v;
    a.resize(n+1);
    c.resize(n+1);
    visited.resize(n+1);
    tree.resize(n+1);
    sum=0;
    vector<vector<ll>> adj(n+1);
    // unordered_map<ll,vll> adj;
    fo(i,1,n-1){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
   fo(i,0,n){
       a[i]=1;
   }
   make_tree(adj,1);
   vll b(n+1,0);
    //numberOfNodes(adj,1,-1);
    ll k=adj.size();
    for(int i=n;i>0;i--){
        vector<pair<ll,ll>> v;
       for(auto j:tree[i]){
         v.pb({a[j],j});
        }
       sort(v.begin(),v.end());
       ll g=v.size();
       ll h=1;
       for(int l=g-1;l>=0;l--){
        //   if(a[v[l].S]<i){
        //   cout<<a[v[l].S]<<" "<<i<<"\n";
        //   continue;
        //   }
          a[i]+=h*a[v[l].S];
          a[v[l].S]*=h;
          h++;
      }
      //b[i]=1;
    }
    
   // solve(adj,1,0);
   ll ans;
   ans=(a[1]%mod)*(x%mod);
   ans=ans%mod;
   cout<<ans<<"\n";
    
    a.clear();
    c.clear();
    visited.clear();
    tree.clear();
}

return 0;
}