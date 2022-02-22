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
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    ll ans1=a[0];
    ll ans2=a[1];
    for(ll i=2;i<n;i+=2){
        ans1=__gcd(ans1,a[i]);
    }
    for(ll j=3;j<n;j+=2){
        ans2=__gcd(ans2,a[j]);
    }
    ll c=0,d=0;
    for(ll i=0;i<n;i+=2){
        if(a[i]%ans2==0){
            c=1;
            break;
        }
    }
    for(ll j=1;j<n;j+=2){
        if(a[j]%ans1==0){
            d=1;
            break;
        }
    }
    if(c==1&&d==1){
        cout<<0<<"\n";
    }
    else if(c==0){
        cout<<ans2<<"\n";
    }
    else{
        cout<<ans1<<"\n";
    }
}

return 0;
}