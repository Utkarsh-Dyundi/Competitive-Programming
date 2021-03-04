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
ll t;
cin>>t;
while(t--){
ll x;
cin>>x;
if(x>45){
    cout<<-1<<"\n";
}
else{
vll a;
ll c=9;
while(x!=0){
    if(x>=c){
        x=x-c;
      a.pb(c);
    }
    c--;
}
sort(a.begin(),a.end());
for(auto i:a){
    cout<<i;
}
cout<<"\n";
}
}
return 0;
}