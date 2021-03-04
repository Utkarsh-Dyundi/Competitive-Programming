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

    string s;
    cin>>s;
    map<char,ll> m;
    char x='A';
    fo(i,0,25){
        m[x]=0;
        x++;
    }
    x='a';
    fo(i,0,25){
        m[x]=0;
        x++;
    }
    fo(i,0,s.size()){
        m[s[i]]++;
    }
  string h="Bulbasaur";
  set<char> se;
  fo(i,0,h.size()){
      se.insert(h[i]);
  }
  ll ans=INT_MAX;
  ll v=0;
  char o;
  fo(i,0,h.size()-1){
      if(h[i]=='u'||h[i]=='a'){
         v=(m[h[i]]/2);
      }
      else
      {
          v=(m[h[i]]);
      }
      ans=min(ans,v);
      if(ans==v){
         o=h[i];
         x=i;
      }
  }


    cout<<ans<<"\n";
return 0;
}
