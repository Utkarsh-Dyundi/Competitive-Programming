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
    string s;
    cin>>s;
    vll a;
    fo(i,0,n-1){
        if(s[i]=='*')
        a.pb(i);
    }
    ll m=a.size();
    if(a.size()<=2){
        cout<<a.size()<<"\n";
        continue;
    }
    else{
    ll ans=1,c=0;
    fo(i,0,m-2){
        c=0;
        for(ll j=i+1;j<=m-1;j++){
            //cout<<a[i]<<" "<<a[j]<<" ";
            if(a[j]-a[i]<=k){
                if(c==0){
                   //cout<<a[i]<<" "<<a[j]<<"\n";
                    ans++;
                    c=1;
                }
            }
            else{
               // cout<<a[j]<<"\n";
                i=j-2;
                break;
            }
            if(j==m-1){
                i=m-2;
            }
        }
        
    }
    cout<<ans<<"\n";
    }
}

return 0;
}