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
tc{
    ll n,m;
    cin>>n>>m;
    ll q;
    ll ar[n][m];
    ll su[n][m];
    ll t=0;
    fo(i,0,n-1){
        t=0;
        fo(j,0,m-1){
            cin>>ar[i][j];
            t+=ar[i][j];
            su[i][j]=t;
        }
    }
     fo(i,0,n-1){
        fo(j,0,m-1){
           //cout<<ar[i][j]<<" ";
        }
        cout<<" \n";
    }
    cin>>q;
    while(q--){
        ll a,b,x,y,sum=0;
        cin>>a>>b>>x>>y;
        a--;
        b--;
        x--;
        y--;
        ll ans=0;
        while(a<=x){
            if(b!=0){
                ans+=su[a][y]-su[a][b-1];
            }
            else
            {
                ans+=su[a][y];
            }
            a++;
        }
        cout<<ans<<"\n";
    }
}

return 0;
}