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

    ll n,k;
    cin>>n>>k;
    vll a,b,c;
    fo(i,0,n-1){
        ll x,y,z;
        cin>>x>>y>>z;
        if(y==1&&z==1){
            a.pb(x);
        }
        else if(y==1){
            b.pb(x);
        }
        else if(z==1){
            c.pb(x);
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    ll x=0,y=0,z=0;
    ll ans=0,res=1;
    fo(i,0,k-1){
       
         
         if(x<a.size()&&y<b.size()&&z<c.size()){
             ll p=b[y]+c[z];
         if(p<a[x]){
             ans+=p;
             y++;
             z++;
         }
         else{
             ans+=a[x];
             x++;
         }
         }
         else{
             if(x==a.size()){
             if(y==b.size()||z==c.size()){
                 cout<<-1<<"\n";
                 res=0;
                 break;
             }
             ll p=b[y]+c[z];
             ans+=p;
             y++;
             z++;
             }
             else{
                 ans+=a[x];
                 x++;
             }
         }
    }
    if(res==1){
        cout<<ans<<"\n";
    }

return 0;
}