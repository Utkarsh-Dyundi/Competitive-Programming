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
    ll n;
    cin>>n;
    ll x;
    vll v;
    forin(v,x,n);
    // ll ans=n-1;
    ll c=1000000007;
    if(n==1){
        cout<<0<<"\n";
        continue;
    }
    if(n==2){
       cout<<1<<"\n";
       ll k=min(v[0],v[1]);
       cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<"\n";
       continue;
    }
    cout<<n<<"\n";
    for(int i=0;i<n-1;i++){
        cout<<i+1<<" "<<n<<" ";
        ll k=min(v[i],v[n-1]);
        cout<<c<<" "<<k<<"\n";
        v[n-1]=k;
        v[i]=c;
        c++;
    }
    c--;
    while(true){
        if(__gcd(c,v[n-3])==1&&__gcd(c,v[n-1])==1)
        break;
        c++;
    }
    cout<<n-1<<" "<<n<<" "<<c<<" "<<v[n-1]<<"\n";
}

return 0;
}