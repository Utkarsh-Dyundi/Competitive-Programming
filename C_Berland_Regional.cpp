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
    vll a,b;
    forin(a,x,n);
    forin(b,x,n);
    map<ll,vll> m,m1;
    fo(i,0,n-1){
        m[a[i]].pb(b[i]);
    }
    for(auto i:m){
        sort(full(m[i.F]),greater<ll>());
    }
   
    for(auto i:m){
        ll s=0;
        fo(j,0,i.S.size()-1){
              s+=i.S[j];

              m1[i.F].pb(s);
        }

    }
    vll ans(n);
    ll p=0;
    for(auto i:m1){
        ll p=i.S.size();
        fo(j,1,p){
            ll d=p/j;
            d=d*j;
            ans[j-1]+=i.S[d-1];
        }
    }
    printv(ans);
}

return 0;
}