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
    ll n,q;
    cin>>n>>q;
    ll x;
    vll a;
    forin(a,x,n);
    vll e;
    vll o;
    e.pb(0);
    o.pb(0);
    ll c1=0,c2=0;
    fo(i,0,n-1){
        if(a[i]&1){
            c2++;
        }
        else{
            c1++;
        }
        e.pb(c1);
        o.pb(c2);
    }
    while(q--){
        ll ans=0;
        ll l,r;
       
        cin>>l>>r;
        ll even=e[r]-e[l-1];
        ll odd=o[r]-o[l-1];
          //cout<<ans<<" ";
       if(even>2){
           ans+=(even*(even-1)*(even-2)/6);
       }
       if(even>0&&odd>1){
           ll h=odd*(odd-1)/2;
           ans+=h*even;
       }
        cout<<ans<<"\n";
    }
}

return 0;
}