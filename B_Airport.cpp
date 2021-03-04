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




int main(){
 fast
 ll n,m;
 cin>>n>>m;
 ll x;
 vll a;
 vll b;
 for(int i=0;i<m;i++){
     cin>>x;
     a.pb(x);
     b.pb(x);
 }
 ll mi=0,ma=0;
 ll j=n;
while(n--){
sort(a.begin(),a.end());
if(a[m-1]==0)
break;
for(int k=0;k<m;k++){
    if(a[k]>0){
    mi+=a[k];
    
    a[k]--;
    break;
  }
 }
}
while(j--){
sort(b.begin(),b.end());
if(b[m-1]==0)
break;
ma+=b[m-1];
//cout<<a[m-1]<<" ";
b[m-1]--;
}
cout<<ma<<" "<<mi<<"\n";
return 0;
}