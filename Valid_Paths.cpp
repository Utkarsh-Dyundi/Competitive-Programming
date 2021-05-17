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
vector<vll> adj,tree;
vector<bool> vis;
vector<ll> ans,res;
void make_tree(ll node){
	vis[node]=true;
	for(auto i:adj[node]){
		if(vis[i]==false){
			tree[node].push_back(i);
			make_tree(i);
		}
	}
}

void dfs(ll i){
    ans[i]=1;
    for(auto j:tree[i]){
        dfs(j);
        // ans[i]+=ans[j];
        ans[i]+=(2*ans[j]);
        ans[i]%=mod;
    }
    ll n=tree[i].size();
    fo(j,0,n-1){
            res[i]+=ans[tree[i][j]]%mod;
            res[i]=res[i]%mod;
    }
    res[i]=((res[i]%mod)*(res[i]%mod))%mod;
    res[i]%=mod;
    
    ll p=0;
    fo(j,0,n-1){
            p+=(ans[tree[i][j]]%mod*ans[tree[i][j]]%mod)%mod;
            p=p%mod;
    }
    res[i]=res[i]-p;
    res[i]=(res[i]%mod+mod)%mod;
}

int main(){
 fast
tc{
    ll n;
    cin>>n;
    adj.resize(n+1);
    tree.resize(n+1);
    vis.resize(n+1);
    ans.resize(n+1);
    res.resize(n+1);
    ll u,v;
    fo(i,1,n-1){
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    make_tree(1);
    dfs(1);
   // cout<<1;
//    printv(ans);
 // cout<<ans[1]<<" ";
   ll result=ans[1]%mod;
   for(auto i:res){
       result+=i%mod;
       result%=mod;
   }
    cout<<result%mod<<"\n";
    adj.clear();
    tree.clear();
    vis.clear();
    ans.clear();
    res.clear();
}

return 0;
}