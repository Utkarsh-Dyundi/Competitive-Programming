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
ll k,l;
cin>>k;
vll a;
for(int i=0;i<12;i++){
    cin>>l;
    a.pb(l);
}
ll sum=0;
ll c=0;
ll p=0;
sort(a.begin(),a.end());
if(k==0){
    cout<<0;
}
else{
for(int i=11;i>=0;i--){
 sum+=a[i];
 c++; 
 if(sum>=k){
 
     p=1;
      break;
 }
}

if(p==1)
cout<<c;
else
{
    cout<<-1;
}
}
return 0;
}