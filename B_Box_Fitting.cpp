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
    ll n,w;
    cin>>n>>w;
    ll x;
    vll a;
    map<ll,ll,greater<ll>> m;
   fo(i,0,n-1){
       cin>>x;
       m[x]++;
   }
    ll c=m.size();
    ll k=0;
    ll ans=0,s=0,b=0,l=0;
    while(!m.empty()){
        //cout<<"L";
        s=0;
        b=w;
        vll j;
        for(auto i:m){
            ll v=b/i.F;
            ll p=min(v,i.S);
            //cout<<p;
            //cout<<i.S<<" ";
            m[i.F]-=p;
            //cout<<i.S<<"\n";
            b-=(p*i.F);

            //cout<<i.F<<" "<<i.S<<" "<<b<<"\n";
            if(i.S<=0){
               j.pb(i.F);
               k++;
            }
        }
        for(auto i:j){
            m.erase(i);
        }
        ans++;
        if(k==c||ans==10)
        break;
    }

cout<<ans-1<<"\n";

}

return 0;
}
