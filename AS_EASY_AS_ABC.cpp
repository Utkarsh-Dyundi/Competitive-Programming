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
    
    string s;
    cin>>s;
    ll x;
    map<char,vector<ll>> m,m1;
    fo(i,0,s.size()-1){
         m[s[i]].pb(i+1);
    }
    vll a,b,c;
    for(auto i:m){
        ll ch=i.S.size();
        if(i.F=='a'){
            a.pb(i.S[0]);
            a.pb(i.S[ch-1]);
        }
        else if(i.F=='b');{
             b.pb(i.S[0]);
            b.pb(i.S[ch-1]);
        }
        else{
             c.pb(i.S[0]);
             c.pb(i.S[ch-1]);
        }
    }
    ll ans=abs(a[0]-b[1]);
    ans=max(ans,abs(a[0],c[1]));
    ans=max(ans,abs(b[0],c[1]));
    cout<<ans;

   


return 0;
}