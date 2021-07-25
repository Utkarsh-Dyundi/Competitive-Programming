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
    ll n,k,x;
    cin>>n>>k;
    vll a;
    forin(a,x,n);

    unordered_map<ll,vll> m;
    vll ans(n);
    fo(i,0,n-1){
        m[a[i]].pb(i);
    }
    vector<pair<ll,ll>> v;
    for(auto i:m){
        v.pb({i.S.size(),i.F});
    }
    sort(full(v));
    reverse(full(v));
    ll c=1;
    ll u=0;
    for(auto i:v){
        ll d=min(k,i.F);
        if(c>k){
                c=1;
            }
        fo(j,0,d-1){
            ll e=m[i.S][j];
            ans[e]=c;
            c++;
            u++;
            if(c>k){
                c=1;
            }
        }
        
    }
    vll b(n+1);
    fo(i,0,n-1){
        if(ans[i]!=0)
        b[ans[i]]++;
    }
    //printv(b);
    ll ca=INT_MAX;
    for(auto i:b){
        if(i!=0)
        ca=min(i,ca);
    }
    //cout<<ca<<"\n";
    vll p(n+1);
    fo(i,0,n-1){
        if(p[ans[i]]>=ca){
            ans[i]=0;
        }
        else
        p[ans[i]]++;
    }
    printv(ans);

}

return 0;
}