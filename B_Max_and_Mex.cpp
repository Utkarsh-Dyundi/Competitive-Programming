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
tc{
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    forin(a,x,n);
    sort(a.begin(),a.end());
    ll ans=0;
    map<ll,ll> m;
    ll c;
    fo(i,0,n-1){
        //cout<<a[i]<<" ";
        if(a[i]!=i){
           // cout<<a[i]<<" "<<i<<" ";
            ans=1;
            c=i;
            break;
        }
    }
    fo(i,0,n-1){
       m[a[i]]=1;
    }
    if(k==0){
        cout<<m.size()<<"\n";
        continue;
    }
    if(ans==1){
        ll p=c+a[n-1];
        //cout<<c<<" "<<a[n-1]<<" "<<p<<" ";
        if(p&1){
        p/=2;
        p++;
        }
        else{
            p/=2;
        }
        //cout<<p<<" ";
        if(m[p]==1)
        cout<<n<<"\n";
        else{
            cout<<n+1<<"\n";
        }
    }
    else{
        cout<<n+k<<"\n";
    }
}

return 0;
}