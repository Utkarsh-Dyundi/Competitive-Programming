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
 ll n,a,b,c;
 cin>>n>>a>>b>>c;
 
 ll ans=INT_MIN;
 fo(i,0,n){
   fo(j,0,n){
     ll d=i*a+j*b;
     ll p=n-d;
    if(p%c==0&&p>=0){
      ll k=p/c;
      ans=max(ans,(i+j+k));
    }
   }
 }
 cout<<ans<<"\n";
return 0;
}