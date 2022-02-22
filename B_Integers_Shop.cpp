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
    ll x,y,z;
    vector<pair<ll,ll>> v;
    vll a;
    fo(i,0,n-1){
        cin>>y>>z>>x;
        v.pb({y,z});
        a.pb(x);
    }
    ll q=v[0].F,w=0,r=v[0].S,s=0;
    map<ll,ll> m;
    map<pair<ll,ll>,ll> m1;
    fo(i,0,n-1){
        if(q>v[i].F){
            q=v[i].F;
        }
        if(r<v[i].S){
            r=v[i].S;
        }
        if(m[v[i].F]==0){
            m[v[i].F]=a[i];
        }
        else if(m[v[i].F]>a[i]){
                m[v[i].F]=a[i];
            }
        if(m[v[i].S]==0){
            m[v[i].S]=a[i];
        }
        else if(m[v[i].S]>a[i]){
                m[v[i].S]=a[i];
            }
        if(m1[{v[i].F,v[i].S}]==0){
            m1[{v[i].F,v[i].S}]=a[i];
        }
        else {
            if(m1[{v[i].F,v[i].S}]>a[i]){
                m1[{v[i].F,v[i].S}]=a[i];
            }
        }
        ll ans1=INT_MAX,ans2;
        if(m1[{q,r}]!=0){
            ans1=m1[{q,r}];
        }
        ans2=m[q]+m[r];

        ll ans=min(ans1,ans2);
        cout<<ans<<"\n";
    }
}

return 0;
}