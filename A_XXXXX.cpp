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

tc{
    ll n,x;
    cin>>n>>x;
    ll y;
    vll a;
    forin(a,y,n);
    ll c=0,sum=0;
    fo(i,0,n-1){
        if(a[i]%x==0)
        c++;
        sum+=a[i];
    }
    if(c==n)
    {
        cout<<"-1"<<"\n";
        continue;
    }
    if(sum%x!=0){
        cout<<n<<"\n";
        continue;
    }
 c=-1;
 ll f,l;
   fo(i,0,n-1){
        if(a[i]%x!=0){
            if(c==-1){
                f=i;
                c=0;
            }
            l=i;
        }
   }
   ll ans=max((n-f-1),(l));
   cout<<ans<<"\n";
}

return 0;
}