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

    ll n;
    cin>>n;
    ll x,y;
    vll k,j;
    ll a=0,u,m=-1,b=INT_MAX;
    fo(i,1,n){
          cin>>x>>y;
          if(m<y){
              m=y;
              a=0;
          }
          
          if(b>x){
              b=x;
              a=0;
          }
           
          
          if(b>=x&&m<=y){
              a=i;
          }
        
    }
   if(a!=0)
   cout<<a<<"\n";
   else
   {
       cout<<-1<<"\n";
   }
   


return 0;
}