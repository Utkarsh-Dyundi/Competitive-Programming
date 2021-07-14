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
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n+10][m+10];
     fo(i,0,n-1){
        fo(j,0,m-1){
           a[i][j]=0;
        }
    }
    ll d=m*n;
    ll ans=0;
    fo(i,0,d-1){
        ll x,y;
        cin>>x>>y;
        if(i&1){
            a[x-1][y-1]=3;
        }
        else{
            a[x-1][y-1]=2;
        }
  for (int i=0; i<=n-k; i++)
   {
      for (int j=0; j<=m-k; j++)
      {
          
          int s = a[i][j];
          //cout<<s<<" ";
          for (int p=i; p<k+i; p++){
             for (int q=j; q<k+j; q++){
                // cout<<p<<" "<<q<<"\n";
                 if(p<n&&q<m){
                 if(a[p][q]!=s){
                     s=8;
                     break;
                 }
                 }
             } 
          }
          if(s==2){
          ans=2;
          break;
      }
      if(s==3){
          ans=3;
          break;
      }  
      }
      if(ans==2){
          ans=2;
          break;
      }
      if(ans==3){
          ans=3;
          break;
      }
   }
    if(ans==2){
          ans=2;
          break;
      }
      if(ans==3){
          ans=3;
          break;
      }
    }
    // fo(i,0,n-1){
    //     fo(j,0,m-1){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
   if(ans==3){
       cout<<"Bob\n";
   }
   else if(ans==2){
       cout<<"Alice\n";
   }
   else{
       cout<<"Draw\n";
   }
}

return 0;
}