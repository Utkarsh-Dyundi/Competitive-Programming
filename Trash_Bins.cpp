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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vll a(n),b(n);
    ll c=INT_MAX;
    fo(i,0,n-1){
        if(s[i]=='1'){
            c=0;
        }
        else{
            c++;
        }
        a[i]=c;
    }
    c=INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            c=0;
        }
        else{
            c++;
        }
        b[i]=c;
    }
    ll ans=0;
    fo(i,0,n-1){
        ans+=min(a[i],b[i]);
    }
    printv(a);
    printv(b);
    cout<<"Case #"<<l+1<<": "<<ans<<"\n";
}

return 0;
}