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

    ll n;
    cin>>n;
    ll x;
    ll sum=0;
    ll a[101]={};
    fo(i,0,n-1){
           cin>>x;
           a[x]++;
           if(x==25){
               continue;
           }
           else if(x==50){
               a[50]++;
               if(a[25]>0){
                   a[25]--;
                   continue;
               }
           }
           else if(x==100){
               a[100]++;
               if(a[25]>0&&a[50]>0){
                   a[25]--;
                   a[50]--;
                   continue;
               }
               else if(a[25]>2){
                   a[25]-=3;
                   continue;
               }
           }
         no;
         return 0;
    }
  yes;

return 0;
}