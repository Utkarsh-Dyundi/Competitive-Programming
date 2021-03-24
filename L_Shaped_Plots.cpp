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
 ll test=1;
tc{
    ll r,c;
    cin>>r>>c;
    ll a[r][c];
    fo(i,0,r-1){
        fo(j,0,c-1){
            cin>>a[i][j];
        }
    }
    ll ans=0;
    fo(i,0,r-1){
        fo(j,0,c-1){
            if(a[i][j]==1){
                if(i<r-1&&j<c-1){
               if(a[i+1][j]==1&&a[i][j+1]==1){
                   ll k=0,l=0;
                   fo(y,i,r-1){
                       if(a[y][j]==0){
                           break;
                       }
                       k++;
                   }
                   fo(y,j,c-1){
                       if(a[i][y]==0){
                           break;
                       }
                       l++;
                   }
                  fo(o,2,k){
                       fo(u,2,l){
                           if((o==2*u)||u==2*o)
                           //cout<<i<<" "<<j<<" 4\n";
                           ans++;
                       }
                   }
               } 
                }
               if(i>0&&j<c-1){
               if(a[i-1][j]==1&&a[i][j+1]==1){
                   //cout<<i<<" "<<j+1<<" "<<a[i][j+1]<<"\n";
                   ll k=0,l=0;
                   for(ll y=i;y>=0;y--){
                       if(a[y][j]==0){
                           break;
                       }
                       k++;
                   }
                   fo(y,j,c-1){
                       if(a[i][y]==0){
                           break;
                       }
                       l++;
                   }
                   fo(o,2,k){
                       fo(u,2,l){
                           if((o==2*u)||(u==2*o)){
                           //cout<<i<<" "<<j<<" 3\n";
                           //cout<<o<<" "<<u<<"\n";
                           ans++;
                           }
                       }
                   }
               }
               }
               if(j>0&&i<r-1){
                   if(a[i+1][j]==1&&a[i][j-1]==1){
                  // cout<<i<<" "<<j-1<<" "<<a[i][j-1]<<"\n";
                   ll k=0,l=0;
                   fo(y,i,r-1){
                       if(a[y][j]==0){
                           break;
                       }
                       k++;
                   }
                   for(ll y=j;y>=0;y--){
                       if(a[i][y]==0){
                           break;
                       }
                       l++;
                   }
                   fo(o,2,k){
                       fo(u,2,l){
                           if((o==2*u)||(u==2*o))
                         //  cout<<i<<" "<<j<<" 1\n";
                           ans++;
                       }
                   }
               }
               }
               if(i>0&&j>0){  
                if(a[i-1][j]==1&&a[i][j-1]==1){
                   ll k=0,l=0;
                   for(ll y=i;y>=0;y--){
                       if(a[y][j]==0){
                           break;
                       }
                       k++;
                   }
                   for(ll y=j;y>=0;y--){
                       if(a[i][y]==0){
                           break;
                       }
                       l++;
                   }
                   fo(o,2,k){
                       fo(u,2,l){
                           if((o==2*u)||(u==2*o))
                           //cout<<i<<" "<<j<<" 2\n";
                           ans++;
                       }
                   }
               } 
               }
            }
        }
    }
     cout<<"Case #"<<test<<":"<<" "<<ans<<"\n";
     test++;
}

return 0;
}