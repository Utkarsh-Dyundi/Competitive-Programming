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


int main(){
 fast
ll t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
      ll d=a+b+c;
      ll m=min(a,b);
      m=min(m,c);
      ll f=d/9;
      if(d%9==0&&m>=f){
          yes;
      }  
      else{
          no;
      }
        
    }


return 0;
}