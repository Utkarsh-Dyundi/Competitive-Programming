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

int main(){
 fast

    ll n;
    cin>>n;
    ll x;
    vll a;
    map<ll,ll> m;
    forin(a,x,n);
    vll z,b;
    z.pb(a[0]);
    ll c=0;
    fo(i,1,n-1){
      if(a[i]!=a[i-1]){
            if(c==0){
                z.pb(a[i]);
            }
            else{
                b.pb(a[i]);
            }
      }
      else{
          if(c==0){
              b.pb(a[i]);
              c=1;
          }
          else{
              z.pb(a[i]);
              c=0;
          }
      }
    }
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    ll ans=0;
    if(z.size()>=2){
    fo(i,0,z.size()-2){
        if(z[i]==z[i+1]){
            continue;
        }
        ans++;
    }
    ans++;
    }
    if(b.size()>=2){
    fo(i,0,b.size()-2){
        if(b[i]==b[i+1]){
            continue;
        }
        ans++;
    }
    ans++;
    }
   
   cout<<ans<<"\n";
return 0;
}