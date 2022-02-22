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
    ll x;
    vll a;
    forin(a,x,n);
    sort(full(a));
    vll l;
    ll h=0;
    for(ll i=n-1;i>=0;i--){
        h+=a[i];
        l.pb(h);
    }
    reverse(full(l));
    ll s=0;
    fo(i,0,n-1){
        s+=a[i];
    }
    if(s<=k){
        cout<<0<<"\n";
        continue;
    }
    ll ans=s-k;
    ll d=s-a[0];
    ll u=d-k;
    fo(i,1,n-1){
        ll f=l[i]-u;
        cout<<f<<"a ";
        ll p=f/(n-i);
        cout<<p<<" ";
        if(p>=a[0]&&p<=a[n-1]){
            ans=min(ans,n-i);
        }
        ll g=a[0]-p;
        if(g<0){
            continue;
        }
        g+=(n-i-1);
        if(g>0){
            ans=min(ans,g);
        }
    }
    cout<<ans<<"\n";
}

return 0;
}