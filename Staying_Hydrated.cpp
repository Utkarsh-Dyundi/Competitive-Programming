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
    vector<vector<ll>> v;
    ll x1,y1,x2,y2;
    fo(i,0,n-1){
        cin>>x1>>y1>>x2>>y2;
        vector<ll> a={x1,x2,y1,y2};
        v.pb(a);
    }
    map<ll,set<pair<ll,ll>>> ans;
    fo(i,-100,100){
        fo(j,-100,100){
            int s=0;
            for(auto k:v){
                int c=INT_MAX;
                int d=INT_MAX;
                if(i>=k[0]&&i<=k[1]&&j>=k[2]&&j<=k[3]){
                    c=0;
                }
                else{
                    if(i>=k[0]&&i<=k[1]){
                        c=abs(j-k[3]);
                        int e=abs(j-k[2]);
                        c=min(c,e);
                    }
                    else if(j>=k[2]&&j<=k[3]){
                        c=abs(i-k[1]);
                        int e=abs(i-k[0]);
                        c=min(c,e);
                    }
                    else{
                        ll a1=abs(i-k[0])+abs(j-k[2]);
                        ll a2=abs(i-k[0])+abs(j-k[3]);
                        ll a3=abs(i-k[1])+abs(j-k[2]);
                        ll a4=abs(i-k[1])+abs(j-k[3]);
                        c=min(min(a1,a2),min(a3,a4));
                    }
                }
                    
                s+=c;
            }
            ans[s].insert({i,j});
        }
    }
    pair<ll,ll> res;
    for(auto i:ans){
        for(auto j:i.S){
        res=j;
        break;
        }
        break;
    }
    // for(auto i:ans){
    //     cout<<i.F<<" ";
    //     for(auto j:i.S){
    //           cout<<j.F<<" "<<j.S<<"\n";
    //     }
    // }
    cout<<"Case #"<<l+1<<": "<<res.F<<" "<<res.S<<"\n";
}

return 0;
}