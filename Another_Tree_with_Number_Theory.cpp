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
ll ans=0;
unordered_map<ll, unordered_map<ll, ll> > ma;
ll dfs(vector<vector<ll>> v, ll m){
     if(v[m].size()==0){
         ma[m].insert(mp(1,1));
         return 0;
     }
         for(auto i:v[m]){
              dfs(v,i);
              for(auto k:ma[i]){
                  ma[m][k.F*v[m].size()]+=k.S;
              }
             }
    return 0;
}
float solve(ll m,ll l){
    float ans=0;
      for(auto i:ma[m]){
          if(l%i.F!=0){
              ans+=float(l)/(float(i.F))*float(i.S);
          }
      }
     return ans;
}

int main(){
 fast
  
    ll n;
    cin>>n;
    ll x;
    vector<vll> v(n+1);
    fo(i,2,n){
        cin>>x;
        v[x].pb(i);
    }
    dfs(v,1);
    ll q,m,l;
    cin>>q;
    fo(i,0,q-1){
        cin>>m>>l;
        ans=0;
         cout<<solve(m,l)<<"\n";
    }

return 0;
}