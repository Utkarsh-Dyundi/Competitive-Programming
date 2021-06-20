#include<bits/stdc++.h>
# define pb push_back
#define ll long long
using namespace std;


int main(){
ll n;
cin>> n;
vector<ll> a;
ll x;
for(int i=0;i<n;i++){
    cin>>x;
    a.pb(x);
}
sort(a.begin(),a.end());
// for(auto i:a){
//     cout<<i<<" ";
// }
cout<<"\n";
ll ans=0;
for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
    ll e=a[j]-a[i];
    ll k=e*2;
    e+=a[j];
    k+=a[j];
   
    auto d=lower_bound(a.begin()+i+2,a.end(),e);
    auto u=lower_bound(a.begin()+i+2,a.end(),k);
    ll f=distance(a.begin()+j,d);
    ll v=distance(a.begin()+j,u);
    
    if(f+j>n-1){
        continue;
    }
    if(*d>k){
        continue;
    }
    if(*u>k){
        v--;
    }
    if(j+v>=n){
        v--;
    }
    //  cout<<i<<" "<<j<<"\n";
    // cout<<f<<" "<<v<<"\n";
    ans+=(v-f+1);
    }
}
cout<<ans;
return 0;
}