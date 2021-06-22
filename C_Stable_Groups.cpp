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

    ll n,k,x;
    cin>>n>>k>>x;
    ll y;
    vll a;
    forin(a,y,n);
    sort(full(a));
    vll v;
    fo(i,0,n-2){
        if(a[i+1]-a[i]>x){
            v.pb(a[i+1]-a[i]);
        }
    }
    sort(full(v));
    ll ans=v.size()+1;
    //printv(v);
    for(auto i:v){
        ll d=i/x;
         if(i%x==0){
                 k++;
            }
        if(d<=k){
            k-=d;
            ans--;
        }
        else{
            break;
        }
    }
    cout<<ans<<"\n";
return 0;
}