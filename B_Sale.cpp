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
 vll a;
 ll x;
 for(int i=0;i<n;i++){
      cin>>x;
      a.pb(x);
 }
 sort(a.begin(),a.end());
 ll sum=0;
 for(int i=0;i<m;i++){
     if(a[i]>=0)
     break;
     sum+=a[i];
 }
 cout<<sum*(-1);


}