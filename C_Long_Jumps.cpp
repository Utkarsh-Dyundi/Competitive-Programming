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
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    vll b(n+1,0);
    fo(i,0,n-1){
      cin>>x;
      a.pb(x);
    }
    ll ans=0;
    for(ll i=n-1;i>=0;i--){
        fo(j,i,n-1){
            if(b[j]==0){
                b[i]+=a[j];
                j+=a[j]-1;
            }
            else{
                b[i]+=b[j];
                break;
            }
           
        }
        ans=max(ans,b[i]);
        
    }
    
    cout<<ans<<"\n";
}

return 0;
}