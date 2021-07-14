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
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vll b;
    forin(b,x,n);
    ll s1=0,s2=0;
    fo(i,0,n-1){
        s1+=a[i];
        s2+=b[i];
    }
    if(s1!=s2){
        cout<<-1<<"\n";
        continue;
    }
    else{
        ll i=0;
        ll j=0;
        vector<pair<ll,ll>> v;
        ll c=0;
        while(i<n&&j<n){
            while(i<n&&a[i]>=b[i]){
                i++;
            }
            while(j<n&&a[j]<=b[j]){
                j++;
            }
            if(i>=n||j>=n){
                break;
            }
            ll d=b[i]-a[i];
            ll e=a[j]-b[j];
            if(d>e){
                for(ll k=0;k<e;k++){
                    a[i]++;
                    a[j]--;
                    v.pb({j,i});
                }
                j++;
            }
            else if(d<e){
                for(ll k=0;k<d;k++){
                    a[i]++;
                    a[j]--;
                    v.pb({j,i});
                }
                i++;
            }
            else{
               // cout<<"L";
                fo(k,0,e-1){
                    a[i]++;
                    a[j]--;
                    v.pb({j,i});
                }
                i++;
                j++;
            }
        }
        cout<<v.size()<<"\n";
        for(auto x:v){
            cout<<x.F+1<<" "<<x.S+1<<"\n";
        }
    }
    }

return 0;
}