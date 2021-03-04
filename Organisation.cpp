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
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    fo(i,0,n){
       cin>>x;
       a.pb(x);
    }
    ll b=0;
    fo(i,0,n-1){
        if(a[b]>=k){
            cout<<b<<" "<<k<<" "<<b+1<<" "<<0<<"\n";
            a[b]-=k;
        }
        else{
            ll c=b+1;
            while(a[b]+a[c]<k){
                c++;
            }
            cout<<b<<" "<<a[b]<<" "<<c<<" "<<k-a[b]<<"\n";
            a[c]-=(k-a[b]);
            a[b]=0;
            
        }
        if(a[b]==0){
            b++;
        }

    }


}

return 0;
}