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

int main(){
 fast
tc{
    ll n,m;
    cin>>n>>m;
    ll x,y=0;
    vll a,b,c;
    c.pb(y);
    fo(i,0,n-1){
         cin>>x;
         a.pb(x);
    }
    fo(i,0,m-1){
        cin>>x;
        b.pb(x);
    }
    set<ll> ans;
    ans.insert(y);
    ll u=0,v,o,p=1;
   while(true){
       if(u>=c.size()){
           break;
       }
       
       v=c[u];
       u++;
        fo(i,0,m-1){
       o=v&b[i];
       const bool ch = ans.find(o) != ans.end();
       if(ch)
       continue;
       else{
           ans.insert(o);
           c.pb(o);
           p++;
       }
       }
       fo(i,0,n-1){
       o=v|a[i];
       const bool is = ans.find(o) != ans.end();
       if(is)
       continue;
       else{
           ans.insert(o);
           c.pb(o);
           p++;
       }
       }
   }
   cout<<ans.size()<<"\n";
}

return 0;
}