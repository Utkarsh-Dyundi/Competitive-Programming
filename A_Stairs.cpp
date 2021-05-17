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

ll power(ll x){
    ll ans=1;
    while(x--){
        ans*=2;
    }
    return ans;
}
int main(){
 fast

tc{
    ll n;
    cin>>n;
    ll x=0;
    ll y=0;
    ll ans=0;
    ll k;
    ll j=0;
    ll h=0;
    ll s=0;
    while(y<=n){
        y+=power(x);
      //  cout<<y<<" ";
        
        ll l=y*y;
        l-=y;
        l/=2;
        k=(y*y)-l;
        //cout<<k<<"\n";
        if(n>=k){
            s+=k;
            ans++;
            n-=k;
        }
        else{
            break;
        }
        x++;
    }
    //cout<<s<<" "<<k<<"\n";
    cout<<ans<<"\n";
}

return 0;
}
