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
#define tc int t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
#define full(v) v.begin(),v.end()

bool can=false;
vector<set<int>> b1,b2;
void dfs(vector<set<int>>& adj, int i, int j,int p){
    if(i==j){
        can=true;
    }
    if(can){
        return;
    }
    for(auto k:adj[i])
    {   if(k!=p){
        dfs(adj,k,j,i);
        }
    }
   return;
}

int main(){
 fast

    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<set<int>> a1(n+1),a2(n+2);
    vector<pair<int,int>> ans;
    b1.resize(n+1);
    b2.resize(n+1);
    fo(i,0,m1-1){
        int x,y;
        cin>>x>>y;
        a1[x].insert(y);
        a1[y].insert(x);
    }
    fo(i,0,m2-1){
        int x,y;
        cin>>x>>y;
        a2[x].insert(y);
        a2[y].insert(x);
    }

    fo(i,1,n){
        fo(j,i,n){
            if(j!=i){
                can=false;
                dfs(a1,i,j,-1);
                if(can)
                continue;
                dfs(a2,i,j,-1);
                if(can)
                continue;
                a1[i].insert(j);
                a2[i].insert(j);
                a1[j].insert(i);
                a2[j].insert(i);
                ans.pb({i,j});
            }
        }
    }

    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i.F<<" "<<i.S<<"\n";
    }

return 0;
}