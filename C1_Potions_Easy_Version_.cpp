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
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second
#define tc ll t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
#define full(v) v.begin(),v.end()


int main(){
 fast

    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    ll dp[n+1][n+1];
    ll ans=0;
    fo(i,0,n){
        fo(j,0,n){
        if(i==0||j==0){
            dp[i][j]=0;
            continue;
        }

        if(dp[i-1][j-1]+a[i-1]>=0){
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j-1]+a[i-1]);
            if(dp[i][j]!=dp[i-1][j-1]||a[i]==0){
                //cout<<dp[i][j]<<" "<<dp[i-1][j-1]<<"\n";
                //ans=j-1;
            }
        }
        else{
            dp[i][j]=dp[i-1][j-1];
        }
        }
    }
    ll m=INT_MIN;

    fo(i,1,n){
      fo(j,1,n){
          cout<<dp[i][j]<<" ";
      }
      cout<<'\n';
    }
 ans=0;
    fo(j,1,n){
      if(dp[n][j]>dp[n][j-1]){
          ans=j-1;
      }
    }
    //cout<<ans<<"\n";
return 0;
}
