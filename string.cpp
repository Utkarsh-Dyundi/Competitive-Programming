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
  for(int i=0;i<h.size();i++){
    for(int j=0;i<h.size();j++){
      if(i!=j){
      //  if(h[i].size()==h[j].size())
          cout<<"yes"<<" ";
      }
    }
  }
}
return 0;
}