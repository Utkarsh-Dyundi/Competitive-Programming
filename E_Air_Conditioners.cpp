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
    ll n,k;
    cin>>n>>k;
    vector<ll> v,m;
    fo(i,0,k-1){
        ll x;
        cin>>x;
        v.pb(x-1);
    }
    fo(i,0,k-1){
        ll x,y;
        cin>>x;
        m.pb(x);
    }
    vll a(n,INT_MAX);
    fo(i,0,k-1){
        a[v[i]]=m[i];
    }
    vll l(n,INT_MAX);
    ll j=INT_MAX;
    fo(i,0,n-1){
        j=min(j+1,a[i]);
        l[i]=j;
    }
    vll r(n,INT_MAX);
    j=INT_MAX;
    vll ans(n);
    for(ll i=n-1;i>=0;i--){
        j=min(j+1,a[i]);
        r[i]=j;
    }
    fo(i,0,n-1){
        ans[i]=min(l[i],r[i]);
    }
    printv(ans);
    
}

return 0;
}