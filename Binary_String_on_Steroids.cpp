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

vll so(ll n){
      vll a;
      fo(i,1,sqrt(n)){
          if(n/i!=i){
              a.pb(n/i);
          }
          a.pb(i);
      }
      return a;
}
int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=INT_MAX;
    ll u=-1,v=-1;
    ll o=0,z=0;
    fo(i,0,n-1){
        if(s[i]=='1'){
            o++;
        }
    }
    if(o==1){
        cout<<0<<"\n";
        continue;
    }
    vll m=so(n);
    
    for(auto i:m){
        ll d=0;
        vll ma(n+1);
        while(d<i){
            for(ll j=d;j<n;j+=i){
                if(s[j]=='1'){
                    ma[d]++;
                }
          }
          ll p=(n/i)-ma[d];
          p+=(o-ma[d]);
        //  cout<<p<<" ";
          ans=min(ans,p);
           d++;
        }
    }
    cout<<ans<<"\n";
}

return 0;
}