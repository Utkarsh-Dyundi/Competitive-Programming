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
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    ll ans=0;
    ans++;
   ll i=0;
    while(a[i]<a[i+1]&&i<n-1){
        ans++;
        i++;
    }
    ll y=n-1;
    if(i!=n-1)
    ans++;
    while(a[y-1]>a[y]&&y>=i+2){
        y--;
        ans++;
    }
    cout<<ans<<"\n";
    x=0;
    y=n-1;
    ll p=min(a[x],a[y]);
    if(n==1){
        cout<<"L";
        return 0;
    }
    if(p==a[x]){
    cout<<"L";
    x++;
    }
    else
    {
        y--;
        cout<<"R";
    }
    while(x<y){
        if(a[x]<a[y]&&a[x]>p){
            
            p=a[x];
            x++;
            cout<<"L";
        }
        else if(a[y]>p){
            p=a[y];
            y--;
            cout<<"R";
        }
        else if(a[x]>p){
            p=a[x];
            x++;
            cout<<"L";
        }
        else{
           // cout<<0<<" "<<a[x]<<" "<<a[y]<<" "<<p;
            break;
        }
    }
    if(a[x]>p){
        cout<<"L";
    }
return 0;
}