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
ll t;
cin>>t;
for(int l=0;l<t;l++){
    ll d,n,k;
    cin>>d>>n>>k;
    ll x;
    vector<ii> arr,dep;
    map<ll,ll> m;
    fo(i,0,n-1){
         ll y,z;
         cin>>x>>y>>z;
         arr.pb({y,i});
         dep.pb({z,i});
         m[i]=x;
    }
    sort(full(arr));
    sort(full(dep));
    ll ans=0;
    multiset<int> a;
    int i=0,j=0;
    while(i<n){
          ll s=0;
            if(arr[i].F<dep[j].F){
                a.insert(m[arr[i].S]);
                i++;
            }
            else if(arr[i].F>dep[j].F){
                a.erase(a.lower_bound(m[dep[j].S]));
                j++;
            }
            else{
                a.insert(m[arr[i].S]);
                i++;
                a.erase(a.lower_bound(m[dep[j].S]));
                j++;
            }
            ll h=a.size();
            h=min(h,k);
            ll f=0;
            for (auto rit=a.rbegin(); rit!=a.rend(); ++rit) {
                            f++;
                            s+=*rit;
                            if(f==h)
                            break;
            } 
            ans=max(ans,s);
            
    }
    cout<<"Case #"<<l+1<<": "<<ans<<"\n";
}

return 0;
}