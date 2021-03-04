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
    ll p,a,b,c;
    cin>>p>>a>>b>>c;
    if(p%a==0||p%b==0||p%c==0){
        cout<<0<<"\n";
        continue;
    }
    else{
        ll o=p/a;
        o++;
        o=abs(p-(o*a));
        ll v=p/b;
        v++;
        v=abs(p-(v*b));
        ll u=p/c;
        u++;
        u=abs(p-(u*c));
        ll ans=min(o,v);
        ans=min(ans,u);
        cout<<ans<<"\n";
    }
}

return 0;
}