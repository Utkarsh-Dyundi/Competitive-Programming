#include<bits/stdc++.h>
#include <numeric>
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
ll n;
cin>>n;
ll a=n;
ll b=n-1;
ll c=n-2;
if(n==1){
    cout<<1;
    return 0;
}
if(n==2){
    cout<<2;
    return 0;
}
ll r=INT_MIN;
while(a>=3){
  
        ll ans=lcm(a,b);
        ans=lcm(ans,c);
        r=max(r,ans);
    a--;
    b--;
    c--;
}
a=n;
b=n-1;
c=n-1;
while(a>=3){
  
        ll ans=lcm(a,b);
        ans=lcm(ans,c);
        r=max(r,ans);
    a--;
    b--;
    c--;
}
a=n;
b=n-1;
c=n-3;
while(a>=3){
  
        ll ans=lcm(a,b);
        ans=lcm(ans,c);
        r=max(r,ans);
    a--;
    b--;
    c--;
}
cout<<r;

return 0;
}