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
vll v;
ll solve(vll a, ll l, ll r, ll i){
    if(l>r){
        return 0;
    }
     ll m=INT_MIN;
     ll p;
     fo(j,l,r){
         m=max(a[j],m);
         if(a[j]==m)
         p=j;
     }
     v[m]=i;
     i++;
     solve(a,l,p-1,i);
     solve(a,p+1,r,i);
    return 0;
}
int main(){
 fast
tc{
    ll n;
    cin>>n;
    v.resize(n+1);
    ll x;
    vll a;
    forin(a,x,n);
    solve(a,0,n-1,0);
    fo(i,0,n-1){
        cout<<v[a[i]]<<" ";
    }
    cout<<"\n";
}

return 0;
}