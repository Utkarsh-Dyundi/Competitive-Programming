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
#define printv(v) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";
//gfg
ll power(ll base,  ll exp) 
{ 
    if (exp == 0) 
        return 1; 
  
    if (exp == 1) 
        return base % mod; 
  
    ll t = power(base, exp / 2); 
    t = (t * t) % mod; 
    if (exp % 2 == 0) 
        return t; 
    else
        return ((base % mod) * t) % mod; 
}
int main(){
 fast

    ll n,x;
    cin>>n>>x;
    ll v;
    vll a,b;
    ll c=0;
    map<ll,ll> m;
    fo(i,0,n-1){
        cin>>v;
        a.pb(v);
        m[v]++;       
        c+=v;
    }
    ll ans=0;
    vll d;
    for(auto i:m){
        d.pb(i.F);
    }
    sort(d.begin(),d.end(),greater<ll>());
    ll k=d[0];
    while(true){
        if(m[k]%x!=0){
            ans=k;
            break;
        }
        else{
            m[k+1]+=x/m[k];
            k++;
        }
    }
    ans=min(c,ans);
    cout<<power(x,ans);
return 0;
}