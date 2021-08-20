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
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    forin(a,x,n);
    vll b=a;
    sort(full(b));
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        m[b[i]]=i;
    }
    ll c=1;
    ll d=m[a[0]];
    d++;
    for(int i=1;i<n;i++){
        if(d>n-1){
            c++;
            d=m[a[i]];
        }
        else if(m[a[i]]!=d){
            c++;
            d=m[a[i]];
        }
        //cout<<c<<" ";
        d++;
    }
    
    if(c>k){
        no;
    }
    else{
        yes;
    }
}

return 0;
}