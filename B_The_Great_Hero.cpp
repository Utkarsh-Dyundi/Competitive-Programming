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
    ll A,B,n;
    cin>>A>>B>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vll b;
    forin(b,x,n);
   
    ll m=INT_MIN;
    ll k,ans=0;
   fo(i,0,n-1){
       if(a[i]>m)
       {
           m=a[i];
           k=i;
       }
   }
   fo(i,0,n-1){
       if(i==k)
       continue;
       if(b[i]%A==0){
           x=b[i]/A;
       }
       else
       {
           x=(b[i]/A)+1;
       }
       B-=x*a[i];
       if(B<=0){
           ans=1;
           break;
       }
   }
   if(ans==1)
   no;
   else{
       if(b[k]%A==0){
           x=b[k]/A;
       }
       else{
           x=(b[k]/A)+1;
       }
       B-=a[k]*(x-1);
       if(B<=0)
       no;
       else
       yes;
   }
}

return 0;
}