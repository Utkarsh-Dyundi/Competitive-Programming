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
ll m,n;
cin>>n>>m;
ll ans=0;
ll k=max(n,m);
for(int i=0;i<=k;i++){
    for(int j=0;j<k;j++){
        ll a=pow(i,2)+j;
        ll b=pow(j,2)+i;
        if(a==n&&b==m){
        ans++;
    }
    }
}
cout<<ans;
return 0;
}