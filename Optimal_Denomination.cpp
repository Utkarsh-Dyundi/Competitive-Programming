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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    ll v=INT_MIN;
    ll p=0;
    if(n==1){
        cout<<1<<"\n";
        continue;
    }
    fo(i,0,n-1){  
        cin>>x;
        if(x>v){
            v=x;
            p=i;
        }
        a.pb(x);
    }
    ll g;
    if(p!=0){
        g=a[0];
    }
    else if(p!=1){
        g=a[1];
    }
    fo(i,0,n-1){
        if(i!=p){
            g=gcd(g,a[i]);
        }
    }
    a[p]=g;
    ll ans=0;
    fo(i,0,n-1){
         ans+=(a[i]/g);
    }
    cout<<ans<<"\n";
}

return 0;
}