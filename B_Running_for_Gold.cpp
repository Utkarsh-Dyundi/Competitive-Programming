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

vector<vector<ll>> a;
bool check(ll i,ll j){
    ll c=0;
     fo(k,0,4){
         if(a[i][k]<a[j][k]){
            // cout<<i<<" "<<j<<" "<<k<<"\n";
             c++;
         }
     }
    if(c<3)
    return true;
    return false;
}
int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    
    fo(i,0,n-1){
        vll v;
        fo(j,0,4){
            cin>>x;
            v.pb(x);
        }
        a.pb(v);
    }
    
    ll ans=0;
    fo(i,1,n-1){
         if(check(ans,i)){
             ans=i;
         }
    }

    ll c=0;
    fo(i,0,n-1){
        if(i!=ans){
            if(check(ans,i)){
                ans=-1;
                break;
            }
        }
    }
    a.clear();
   ans==-1?cout<<-1:cout<<ans+1;
   cout<<"\n";
   
}

return 0;
}