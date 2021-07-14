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
int t;
cin>>t;
for(int l=1;l<=t;l++){
   ll a[3][3];
   cin>>a[0][0]>>a[0][1]>>a[0][2]>>a[1][0]>>a[1][2]>>a[2][0]>>a[2][1]>>a[2][2];
   ll d1=a[0][0]+a[2][2];
   if(d1%2==0){
       d1/=2;
   }
   else{
       d1=-1;
   }
    ll d2=a[1][0]+a[1][2];
   if(d2%2==0){
       d2/=2;
   }
   else{
       d2=-1;
   }
    ll d3=a[0][2]+a[2][0];
   if(d3%2==0){
       d3/=2;
   }
   else{
       d3=-1;
   }
    ll d4=a[0][1]+a[2][1];
   if(d4%2==0){
       d4/=2;
   }
   else{
       d4=-1;
   }
   map<ll,ll> m;
   if(d1!=-1){
       m[d1]++;
   }
   if(d2!=-1){
       m[d2]++;
   }
   if(d3!=-1){
       m[d3]++;
   }
   if(d4!=-1){
       m[d4]++;
   }
   ll ans=0;
   for(auto i:m){
         ans=max(ans,i.S);
   }

   if((a[0][1]-a[0][0])==(a[0][2]-a[0][1])){
       ans++;
   }
   if((a[1][0]-a[0][0])==(a[2][0]-a[1][0])){
       ans++;
   }
   if((a[2][1]-a[2][0])==(a[2][2]-a[2][1])){
       ans++;
   }
   if((a[1][2]-a[0][2])==(a[2][2]-a[1][2])){
       ans++;
   }
   cout<<"Case #"<<l<<": "<<ans<<"\n";
}

return 0;
}