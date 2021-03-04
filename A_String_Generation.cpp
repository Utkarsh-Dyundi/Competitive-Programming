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
#define vvll vector<vll>
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second 

set<string> subString(string s, int n) 
{
   set<string> a;
    for (int i = 0; i < n; i++) 
        for (int len = 1; len <= n - i; len++){
           string h=s.substr(i, len);
        //    string g=h;
        // reverse(g.begin(), g.end());
        //     if (a.find(g) != a.end()){
        //       continue;
        //     }
        //     else
              a.insert(h);
         }
          return a;
}
int main(){
 fast

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    set<string> a;
    a=subString(s,s.size());
    vector<string> h;
  for(auto it=a.begin();it !=a.end();++it){
    h.pb(*it);
  }
  for(int j=0;j<h.size();j++){
   string r=h[j];
   ll d=0,c=0,k=0;
   for(int i=0;i<r.size();i++){
       
       while(d==0&&r[i]=='1'){
       i++;
       k++;
       }
       if(r[i]=='1')
       c++;
       if(c==2){
           reverse(r.begin() + k, r.begin() + i);
           c=0;
           i=-1;
           d=0;
           k=0;
       }
       d++;
   }
   h[j]=r;
  }
  for(auto i:h)
  cout<<i<<"\n";
}
return 0;
}