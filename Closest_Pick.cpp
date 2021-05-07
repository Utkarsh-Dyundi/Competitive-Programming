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
ll t;
cin>>t;
fo(l,1,t){
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    forin(a,x,n);
    sort(a.begin(),a.end());
    vll b;
    if (a[0]!=1){
        b.pb(a[0]-1);
    }
    if(a[n-1]!=k){
        b.pb(k-a[n-1]);
    }
    ll h=0;
    for(ll i=0;i<n-1;i++){
           ll p=(a[i+1]-a[i])/2;
           b.pb(p);
           h=max(h,(a[i+1]-a[i]-1));
    }
    sort(b.begin(),b.end(),greater<ll>());
    double ans;
    if(b.size()==1){
        ans=b[0];
    }
    else{
        ans=b[0]+b[1];
    }
    if(ans<=0){
        ans=0;
    }
    double res;
    res=double(double(ans)/double(k));
    res=max(double(double(h)/double(k)),res);
    cout<<"Case #"<<l<<": ";
    cout<<setprecision(8)<<res<<"\n";
}

return 0;
}