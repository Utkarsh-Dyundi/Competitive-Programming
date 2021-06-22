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

    ll n;
    cin>>n;
    ll x,y;
    vector<pair<ll,ll>> v;
    fo(i,0,n-1){
        cin>>x>>y;
        v.pb({y,x});
    }

    sort(full(v));
    ll i=0,j=v.size()-1;
    ll ans=0;
    ll c=0;
    while(j>=i){
         if(c>=v[i].F){
             ans+=v[i].S;
             c+=v[i].S;
             i++;
         }
         else{
             if(v[j].S+c>v[i].F){
                 ll d=v[i].F-c;
                 v[j].S-=d;
                 ans+=2*d;
                 c+=d;
             }
             else{
                 ans+=v[j].S*2;
                 c+=v[j].S;
                 j--;
             }
         }
    }
    cout<<ans<<"\n";
return 0;
}