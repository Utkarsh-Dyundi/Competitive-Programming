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

int main(){
 fast
tc{
    ll x,y,n,q;
    cin>>n>>q;
    ll c=0;
    vector<pair<ll,ll>> v(q);
    while(q--){
        cin>>x>>y;
        v[c].F=x;
        v[c].S=y+1;
        c++;
    }
    vector<vll> end(n+2);
    for(auto i: v){
        end[i.S].pb(i.F);
    }

    ll k[n+1]={};
    for(auto j:v){
        k[j.F]++;
    }
    ll s=0;
    c=0;
    vll ans(n+1,0);
    fo(i,1,n){
        c+=k[i];
        s+=(k[i]*i);
        for(auto j: end[i])
        {
            s-=i;
            c--;
        }
           ans[i]=(c*i-s+c);
    }
    fo(i,1,n){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";

}


return 0;
}