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

    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vll b;
    forin(b,x,n);
    vll ps;
    ll ans=0;
    fo(i,0,n-1){
        ps.pb(a[i]*b[i]);
        ans+=ps[i];
    }
    vll l,r;
    ll c=0;
    fo(i,0,n-1){
         c+=ps[i];
         l.pb(c);
    }
    c=0;
    for(int i=n-1;i>=0;i--){
        c+=ps[i];
        r.pb(c);
    }
    reverse(r.begin(),r.end());
    ll u,v;
    ll d=0;
    // printv(l);
    // printv(r);
    fo(i,0,n-1){
        u=i,v=i+1;
        d=0;
    while(u>=0&&v<=n-1){
        d+=a[u]*b[v];
        d+=a[v]*b[u];
           ll p=d;
           if(u>0)
           p+=l[u-1];
           if(v<n-1){
               p+=r[v+1];
           }
           ans=max(ans,p);
           v++;
           u--;
           //cout<<i<<" "<<d<<" "<<p<<"\n";
    }
    }
     fo(i,0,n-1){
        u=i,v=i;
        d=0;
    while(u>=0&&v<=n-1){
        d+=a[u]*b[v];
        if(u!=v)
        d+=a[v]*b[u];
           ll p=d;
           if(u>0)
           p+=l[u-1];
           if(v<n-1){
               p+=r[v+1];
           }
           ans=max(ans,p);
           v++;
           u--;
           //cout<<i<<" "<<d<<" "<<p<<"\n";
    }
    }
    cout<<ans<<"\n";

return 0;
}