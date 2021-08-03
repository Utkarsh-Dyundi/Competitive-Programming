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

   vector<string> v;
   fo(i,0,3){
       string s;
       cin>>s;
       v.pb(s);
   }
   vector<string> s={"H","2B","3B","HR"};
   vll ans(4);
   fo(i,0,3){
       fo(j,0,3){
           if(v[i]==s[j]){
               ans[j]=1;
           }
       }
   }
   ll c=0;
  // printv(ans);
   for(auto i:ans){
       if(i==1)
       c++;
   }
   if(c==4){
       cout<<"Yes";
   }
   else{
       cout<<"No";
   }



return 0;
}