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
 ll t;
 cin>>t;
fo(l,1,t){
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    map<ll,ll> m;
    fo(i,0,n-1){
        m[a[i]]=i+1;
    }
    ll c,ans=0;
    fo(i,0,n-2){
        fo(j,i,n-1){
            if(a[j]==i+1){
                c=j;
                break;
            }
        }
        reverse(a.begin()+i,a.begin()+c+1);
       // cout<<c<<" "<<i<<" ";
        ans+=(c-i+1);
    }
    cout<<"Case #"<<l<<": "<<ans<<"\n";
}

return 0;
}