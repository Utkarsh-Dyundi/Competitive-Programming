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

    ll n,k;
    cin>>n>>k;
    ll x,y;
    map<ll,vll> m;
    fo(i,0,n-1){
         cin>>x>>y;
         m[x].pb(y);
    }
    k=n-k+1;
    x=0;
    y=0;
    ll h=0,o,ans=0;
    for(auto i: m){
        sort(i.S.begin(),i.S.end(),greater<int>());
        x=i.S.size();
       // cout<<i.F<<" "<<x<<" ";
        if(y+x>=k){
             h=k-y;
             o=i.S[h-1];
            // cout<<i.F<<" "<<o<<" ";
             fo(j,0,x-1){
                 if(i.S[j]==o){
                     ans++;
                 }
             }
             break;
        }
        else{
            y+=x;
        }
    }
  cout<<ans<<"\n";
return 0;
}