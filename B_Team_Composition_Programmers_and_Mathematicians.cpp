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
tc{
    ll n,m;
    cin>>n>>m;
    ll a=max(n,m);
    ll b=min(n,m);
    ll d=a/3;
    ll e=a%3;
    ll ans=min(b,d);
    b-=ans;
    if(e>0){
        if(e==1){
            if(b>=3){
                ans++;
            }
        }
        else{
            if(b>=6){
                ans+=2;
            }
            else if(b>=2){
                ans++;
            }
        }
    }
    ll ans2=n/2;
    ll ans3=m/2;
    ans2=min(ans2,ans3);
    ans=max(ans,ans2);
    ll ans4=(n+m)/4;
    ans=min(n,min(m,ans4));
    cout<<ans<<"\n";
}

return 0;
}