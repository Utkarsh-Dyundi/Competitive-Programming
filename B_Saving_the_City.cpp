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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    vector<ii> v;
    int u=-1;
    fo(i,0,n-1){
        if(s[i]=='0'){
            continue;
        }
        if(u==-1&&s[i]=='1'){
            u=i;
        }
        if(i<n-1&&s[i+1]=='0'&&s[i]=='1'){
            if(u==-1){
                v.pb({i,i});
            }
            else{
                v.pb({u,i});
            }
            u=-1;
        }
    }
    if(u!=-1){
        v.pb({u,n-1});
    }
    int ans=v.size()*a;
    int m=v.size();
    fo(i,0,m-2){
        int d=v[i+1].F-v[i].S-1;
        int e=d*b;
        if(e<a){
            ans-=a;
            ans+=e;
        }
    }
    cout<<ans<<"\n";
}

return 0;
}