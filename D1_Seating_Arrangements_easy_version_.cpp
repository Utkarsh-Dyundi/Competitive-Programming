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
    ll n,m;
    cin>>n>>m;
    ll x;
    vll a;
    map<ll,vll> b;
    fo(i,0,m-1){
        cin>>x;
        a.pb(x);
        b[x].pb(i);
    }
    for(auto i:b){
        sort(full(i.S));
        reverse(full(b[i.F]));
    }
    ll ans=0;
    ll c=0;
    vll r(m),res(m,-1);
    for(auto i:b){ 
        for(auto j:i.S){
            r[c++]=j;
        }
    }
    c=0;
    fo(i,0,m-1){
        ll j=0;
        while(r[j]!=i){
            if(res[j++]!=-1){
                ans++;
            }
        }
        res[j]=1;
    }
    //printv(r);
    cout<<ans<<"\n";
}

return 0;
}