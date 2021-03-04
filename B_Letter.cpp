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
 string s1,s2;
 getline(cin, s1);
 getline(cin,s2);
 ll ans=0,space=0;
 fo(i,0,s2.size()-1){
     fo(j,0,s1.size()-1){
          if(s2[i]==' '){
              space++;
              break;
          }
          else if(s2[i]==s1[j]){
              ans++;
              s1.erase(s1.begin()+j);
              break;
          }
     }
 }
//acout<<ans<<" "<<space<<"\n";
 if(ans+space==s2.size()){
     yes;
 }
 else
 no;
return 0;
}
