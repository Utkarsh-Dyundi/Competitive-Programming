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
ll t;
cin>>t;
fo(l,1,t){
    cout<<"Case #"<<l<<": ";
    ll r,c,k,r1,r2,c1,c2;
    cin>>r>>c>>k>>r1>>c1>>r2>>c2;
    ll ans=0;
    if(r1!=1){
        ans+=(c2-c1+1);
    }
    if(r2!=r){
        ans+=(c2-c1+1);
    }
    if(c1!=1){
        ans+=(r2-r1+1);
    }
    if(c2!=c){
        ans+=(r2-r1+1);
    }
    //cout<<ans<<"\n";
    ans+=((r2-r1)*(c2-c1+1));
    ans+=((c2-c1)*(r2-r1+1));
    //cout<<ans<<"\n";
    ll a=r1-1;
    ll b=r-r2;
    ll u=c1-1;
    ll v=c-c2;
    
    ans+=min(min(a,b),min(u,v));
    cout<<ans<<"\n";
}

return 0;
}