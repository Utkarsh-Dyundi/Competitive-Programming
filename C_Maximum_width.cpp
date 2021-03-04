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
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s;
    cin>>t;
    map <char,vll> m3;
    map <char, ll> m1;
    map <char, ll> m2;
    vll f,ba;
    fo(i,0,n-1){
        m3[s[i]].pb(i);
    }
    fo(i,0,m-1){
        m1[t[i]]++;
        m2[t[i]]=0;
    }
    ll b,j=0;
    fo(i,0,n-1){
        if(s[i]==t[j]){
           // a=i;
            f.pb(i);
            break;
        }
    }
    ll p=m-1;
    b=m-1;
    for(ll i=n-1;i>=0;i--){
          if(s[i]==t[p]){
              ba.pb(i);
              p--;
          }
          if(p==0){
              break;
          }
    }
  ll h=ba.size();
  ll ans=ba[h-1]-f[0];
  //cout<<ba[h-1]<<" ";
  ll u=1;
  h--;
  fo(i,f[0]+1,n-1){
    if(s[i]==t[u]){
        if(h==0){
            break;
        }
        ans=max(ans,(ba[h-1]-i));
        //cout<<ba[h-1]<<" "<<i<<" ";
        u++;
        h--;
    }
  }
  cout<<ans;
return 0;
}