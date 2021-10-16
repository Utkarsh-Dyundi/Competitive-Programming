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

int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        v.pb({a[i],i});
    }
    sort(full(v));
    ll k=n-2;ll m=n-1;
    while(v[k].F==0){
        k++;
    }
    ll ans=0;
    vector<pair<ll,ll>> res;
    while(k>=0&&m>=0&&k!=m){
          ll p=min(v[k].F,v[m].F);
          if(k>=0&&m>=0&&k!=m){
          fo(i,0,p-1){
              res.pb({v[k].S+1,v[m].S+1});
              v[k].F--;
              v[m].F--;
              ans++;
          }
          }
          if(v[k].F==0){
              if(k<m){
                  k--;
              }
              else
              k=m-1;
          }
          if(v[m].F==0){
              if(m<k){
                  m--;
              }
              else
              m=k-1;
          }
    }
    cout<<ans<<"\n";
    for(auto i:res){
        cout<<i.F<<" "<<i.S<<"\n";
    }
}

return 0;
}