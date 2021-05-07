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
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    map<ll, ll> m;
    fo(i,0,n-1){
        cin>>x;
        if(x%k==0){
            continue;
        }
        ll  p=x%k;
        p=k-p;
        m[p]++;
    }
    ll ans=0;
    if(m.size()==0){
        cout<<0<<"\n";
        continue;
    }
    ll u=INT_MIN;
    ll v;
    for(auto i :m){
        if(i.S>=u){
           u=i.S;
           v=i.F;
        }
    }
    ans+=v;
    u--;
    ans+=u*k;
    ans++;
    cout<<ans<<"\n";
}

return 0;
}