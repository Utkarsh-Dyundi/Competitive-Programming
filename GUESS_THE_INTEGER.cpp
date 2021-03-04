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
#define printv(v,n) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";

int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll y;
    char x;
    map<char,vll> m;
    fo(i,0,n-1){
        cin>>x>>y;
        m[x].pb(y);
    }
    if(m.size()==1){
        cout<<-1<<"\n";
        continue;
    }
    ll ans=0;
    sort(m['L'].begin(),m['L'].end());
    sort(m['R'].begin(),m['R'].end(),greater<ll>());
    if(m['L'][0]<=m['R'][0]||abs(m['L'][0]-m['R'][0])==1){
        cout<<-1<<"\n";
    }
    else{
         ans=abs(m['L'][0]-m['R'][0]-1);
         cout<<ans<<"\n";
    }
}

return 0;
}