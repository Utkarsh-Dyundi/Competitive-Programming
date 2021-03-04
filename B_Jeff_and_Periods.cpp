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



int main(){
fast
ll n;
cin>>n;
ll x;
vll a;
fo(i,0,n-1){
    cin>>x;
    a.pb(x);    
}

if(n==1){
    cout<<1<<"\n"<<x<<" "<<0;
}

else{
unordered_map<ll,vll> m;
fo(i,0,n-1){
m[a[i]].pb(i);
}
set<ll> v;
unordered_map<ll,ll> u;
ll ans=0;
for(auto i:m){
    ll c=0;
    ll d=i.second[1]-i.second[0];
    fo(j,1,i.second.size()-1){
      if(i.second[j]-i.second[j-1]!=d){
          c=1;
          break;
      }
    }
    if(c==0&&i.second.size()>1){
        ans++;
        v.insert(i.first);
        u[i.first]=d;
    }
    else if(i.second.size()==1){
        v.insert(i.first);
        u[i.first]=0;
        ans++;
    }
    }
cout<<ans<<"\n";
for(auto i:v){
    cout<<i<<" "<<u[i]<<"\n";
}
}
return 0;
}