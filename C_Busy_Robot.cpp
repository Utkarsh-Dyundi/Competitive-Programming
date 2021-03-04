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
ll t;
cin>>t;
while(t--){
    ll n,ans=0,v,u,m,i;
    cin>>n;
    ll x,y;
    vll a,b;
    fo(j,0,n-1){
        cin>>x>>y;
        a.pb(x);
        b.pb(y);
    }
    if(n==1){
        cout<<1<<"\n";
    }
    else{
    if(abs(b[0])<a[1])
    ans++;
    v=0;u=a[0]+abs(b[0]);m=b[0];
    for(i=1;i<n;i++){
        if(a[i]<u&&b[i]>=v+a[i]&&max(v,m)>=b[i]&&min(v,m)<=b[i]){
        ans++;
       // cout<<i<<"a ";
        }
         if(a[i]>=u){
             u+=abs(m-b[i])+a[i]-u;
             v=m;
             ll o=abs(m-b[i]);
             m=b[i];
             
            if(a[i]<=o&&a[i+1]>=o||i==n-1)
             ans++;
            // cout<<i<<" ";
         }
         
    }
    cout<<ans<<"\n";
    }
}

return 0;
}