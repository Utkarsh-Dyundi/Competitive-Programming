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
    sort(full(a));
    double ans=0;
    if(a.size()&1){
        ans+=double(double(a[0])*double(a[0]));

        for(int i=2;i<=n-1;i+=2){
           
            ans+=double(double(a[i])*double(a[i]));
            ans-=double(double(a[i-1])*double(a[i-1]));
        }
    }
    else{
        for(int i=1;i<=n-1;i+=2){
            ans+=double(double(a[i])*double(a[i]));
            ans-=double(double(a[i-1])*double(a[i-1]));
        }
    }
    //cout<<ans<<"\n";
    double res=3.1415926536*ans;
    cout<<setprecision(14)<<res<<"\n";
return 0;
}