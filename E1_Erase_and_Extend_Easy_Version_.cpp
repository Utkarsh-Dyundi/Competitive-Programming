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
ll n,k;
cin>>n>>k;
string s;
cin>>s;
stack<char> t;
ll c=n;
ll j=0;
ll h=0;
ll g=0;
fo(i,1,n-1){
      if(s[i]>s[0]){
            c=i;
            break;
      }
      else if(s[i]==s[0]){
          g=i;
          while(s[i]==s[j]){
              i++;
              j++;
              if(i==n){
                  c=i-1;
                  break;
              }
              if(s[i]>s[j]){
                  c=g;
                  h=1;
                  break;
              }
              else if(s[i]<s[j]){
                  j=0;
                  break;
              }
          }
      }
      if(h==1){
          break;
      }
}
c--;
ll ans=0;
while(true){
      fo(i,0,c){
          cout<<s[i];
          k--;
          if(k==0){
              return 0;
          }
      }
}
return 0;
}