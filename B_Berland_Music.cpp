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
    string s ;
    cin>>s;
    vll ans(n);
    vector<vector<pair<ll,ll>>> v(2);
    fo(i,0,n-1){
        if(s[i]=='1'){
            v[0].pb({a[i],i});
        }
        else{
            v[1].pb({a[i],i});
        }
    }
    sort(full(v[0]));
    sort(full(v[1]));
    ll h=v[1].size();
    ll k=1;
    for(auto j:v[1]){
        ans[j.S]=k++;
    }
    for(auto j:v[0]){
        ans[j.S]=k++;
    }
    printv(ans);
}

return 0;
}