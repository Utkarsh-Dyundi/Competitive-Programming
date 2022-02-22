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
    ll ans=0;
    // set<ll> s;
    // fo(i,0,n-1){
    //     s.insert(a[i]);
    // }
    // vll v;
    // for(auto i:s){
    //     v.pb(i);
    // }
   
    // if(n==1){
    //     cout<<a[0]<<"\n";
    //     continue;
    // }
    // map<ll,ll> m;
    // fo(i,0,n-1){
    //     m[a[i]]++;
    // }

    sort(full(a));
    reverse(full(a));
    ll i=0,j=k;
    
    map<ll,ll> m;
    while(k>0){
    if(m[i]==1){
        i++;
        continue;
    }

    if(a[i]==a[j]){
        ans++;
    }
    m[i]=1;
    m[j]=1;
               a[i]=0;
               i++;
               a[j]=0;
               j++;
               k--;
    }
    // cout<<ans<<" ";
    // printv(a);
    fo(i,0,n-1){
        ans+=a[i];
    }
    cout<<ans<<"\n";
}

return 0;
}