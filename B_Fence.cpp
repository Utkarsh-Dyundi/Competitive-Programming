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
ll x;
vll a;
ll dp[n];
ll s=0;
fo(i,0,n-1){
    cin>>x;
    s+=x;
    dp[i]=s;
    a.pb(x);
}
ll m=INT_MAX;
ll d=0;
ll ans=0;
for(int i=0;i<=n-k;i++){
    if(i!=0){
    d=dp[i+k-1]-dp[i-1];
   }
   else
   {
       d=dp[i+k-1];
   }
   if(m>d){
         m=d;
         ans=i;
     }
   
}
cout<<ans+1;
return 0;
}