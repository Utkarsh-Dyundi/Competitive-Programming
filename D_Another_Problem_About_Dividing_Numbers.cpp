#include<bits/stdc++.h>
using namespace std;
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define aint(c) c.begin(),c.end()
#define mod 1000000007
#define itor(c) typeof(c.begin())
#define vi vector<int>
#define si set<int>
#define msi multiset<int>
#define ii pair<int,int>
#define sii set<ii>
#define vii vector<ii>
#define vvi vector<vi>
#define pb push_back
#define mp make_pair
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second
#define tc int t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
#define fuint(v) v.begin(),v.end()
 
vector<int> solve(int n)
{
   vector<int> a;
    while (n % 2 == 0)
    {
        a.pb(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            //cout<<i<<" ";
            a.pb(i);
            n = n/i;
        }
    }
    if (n > 2)
        a.pb(n);
    //printv(a);
    return a;
}
 
int main(){
 fast
tc{
   int a,b,k;
   cin>>a>>b>>k;
   if(a==b&&b==1){
       no;
       continue;
   }
  vector<int> u=solve(a);
   vector<int> v=solve(b);
   unordered_map<int,int> m1,m2;
   for(auto i:u){
       m1[i]++;
   }
   for(auto i:v){
       m2[i]++;
   }
   int ans=0;
   for(auto i:m1){
       if(m2.find(i.F) != m2.end())
       ans+=2*min(m1[i.F],m2[i.F]);
   }
//    printv(u);
//    printv(v);
   int d=u.size()+v.size()-ans;
  int mi,ma;
  int o=min(a,b);
  int p=max(a,b);
  if(a==b){
      mi=2;
  }
  else if(p%o==0){
     mi=1;
  }
  else{
      mi=2;
  }
   ma=u.size()+v.size();
   //cout<<mi<<" "<<ma<<"\n";
  if(mi<=k&&ma>=k){
      yes;
  }
  else{
      no;
  }
 
}
 
return 0;
}