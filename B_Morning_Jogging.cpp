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
    ll n,m;
    cin>>n>>m;
    ll x;
    ll a[n][m],b[n][m];
    map<ll,vector<pair<ll,ll>>> ma;
    fo(i,0,n-1){
        fo(j,0,m-1){
            cin>>a[i][j];
            ma[a[i][j]].pb({i,j});
            b[i][j]=0;
        }
    }
    ll k[m],l=1;
    for(auto i: ma){
        for(auto j:i.S){
            if(l>m){
                l=696969;
                break;
            }
            b[j.F][j.S]=l;
           // k[l]=j.F;
            l++;
        }
        if(l==696969){
            break;
        }
    }
    // fo(i,0,n-1){
    //     fo(j,0,m-1){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    fo(i,0,n-1){
        vll p(m);
        ll d=0;
        ll o;
        fo(j,0,m-1){
            // if(b[i][j]>0&&d==0){
            //     p[b[i][j]-1]=a[i][j];
            //     //d=1;
            //     p[j]=a[i][b[i][j]-1];
            //     b[i][j]=-1;
            // }
            // if(p[j]==0){
            //     p[j]=a[i][j];
            // }
            if(b[i][j]>0){
                p[b[i][j]-1]=a[i][j];
                b[i][j]=-1;
            } 
        }
        ll u=0;
        fo(j,0,m-1){
           while(p[j]>0){
               j++;
               if(j==m){
                   break;
               }
           }
           if(j==m){
               break;
           }
           while(b[i][u]==-1){
                u++;
                if(u>=m){
                    break;
                }
            }
            if(u>=m){
               break;
            }
            p[j]=a[i][u];
            u++;
        }
        printv(p);
    }
}

return 0;
}
/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do something instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/