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
tc{
    ll n,u,v;
    cin>>n>>u>>v;
    ll x;
    vll a;
    set<ll> s;
   fo(i,0,n-1){
       cin>>x;
       a.pb(x);
       s.insert(x);
   }
   if(s.size()==1){
       cout<<min(v+v,u+v)<<"\n";
   }
   else {
       ll c=0;
       for(int i=0;i<n-1;i++){
           if(abs(a[i+1]-a[i])>=2){
               c=1;
               break;
           }
       }
       if(c==1){
           cout<<0<<"\n";
           continue;
       }
       else if(v<=u){
           cout<<v<<"\n";
       }
       else{
           cout<<u<<"\n";
       }
   }
}

return 0;
}