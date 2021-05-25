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
    ll n;
    cin>>n;
    ll a[n][n];
    fo(i,0,n-1){
        fo(j,0,n-1){
            cin>>a[i][j];
        }
    }
    vector<pair<ll,ll>> v;
    fo(i,0,n-1){
        fo(j,0,n-1){
            if(a[i][j]==1){
                if(i==0){
                    v.push_back({i,j});
                }
                else{
                    if(j!=0||j!=n-1){
                        if(a[i-1][j]==0&&a[i-1][j-1]==0&&a[i-1][j+1]==0){
                            v.push_back({i,j});
                        }
                        }
                        else if(j==0){
                              if(a[i-1][j]==0&&a[i-1][j+1]==0){
                            v.push_back({i,j});
                            }
                        }  
                        else{
                            if(a[i-1][j]==0&&a[i-1][j-1]==0){
                            v.push_back({i,j});
                        }
                        }
                    }
                }
            }
        }
        // for(auto i:v){
        //     cout<<i.F<<" "<<i.S<<"\n";
        // }
        ll ans=0;
        ll m=v.size();
        fo(i,1,m-1){
            if(v[i].F==v[i-1].F&&v[i].S==v[i-1].S+1){
                cout<<"No\n";
              
                ans=1;
                  break;
            }
        }
        if(ans==0){
            cout<<"Yes\n";
        }
        }

return 0;
}