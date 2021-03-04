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
const int sz = 1e5; 

vector<int> tree[sz + 1]; 

bool vis[sz + 1]; 

int dis[sz + 1];
ll a[1000000]={}; 

void addEdge(int a, int b) 
{ 
    tree[a].push_back(b); 
    tree[b].push_back(a); 
} 
  void bfs(int node) 
{ 
    queue<pair<int, int> > qu; 
 
    qu.push({ node, 0 }); 
    dis[0] = 0; 
  
    while (!qu.empty()) { 
        pair<int, int> p = qu.front(); 

        qu.pop(); 
        vis[p.first] = true; 

        for (int child : tree[p.first]) { 
            if (!vis[child]) { 
                dis[child] = dis[p.first] + 1; 
                qu.push({ child, p.first }); 
            } 
            } 
    } 
} 
int main(){
 fast
tc{
    ll n;
    cin>>n;
    fo(i,1,n){
        cin>>a[i];
    }
    fo(i,0,n-2){
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }
}