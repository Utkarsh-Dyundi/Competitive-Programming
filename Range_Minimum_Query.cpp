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
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";


int main(){
 fast

    ll n;
    cin>>n;
    ll x;
    vll a;
      ll p=0;
     while((1<<(p+1))<=n){
            p++;
        }
    ll dp[n+1][p+1];
    fo(i,0,n-1){
        cin>>x;
        a.pb(x);
        dp[i][0]=a[i];
    }
    fo(i,1,p){
       for(ll j=0;j+(1<<i)-1<n;j++){
               ll k=(1<<(i-1));
               dp[j][i]=min(dp[j][i-1],dp[j+k][i-1]);
       }
    }
    //  fo(i,0,p){
    //    fo(j,0,n-(1<<p)){
    //        //cout<<j<<" "<<i<<" "<<dp[j][i]<<" "; 
    //    }
    //    cout<<"\n";
    // }
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll len=r-l+1;
        if(len==1){
            cout<<a[l]<<"\n";
            continue;
        }
        ll k=0;
        while((1<<(k+1))<=len){
            k++;
        }
        //cout<<k<<" ";
        ll ans=min(dp[l][k],dp[r-(1<<k)+1][k]);
        cout<<ans<<"\n";
    }


return 0;
}