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
#define md 998244353
vector<vll> v;
ll N;
ll A[2][1000001]={};
void con(){
     fo(j,0,31){
         ll e=0,o=0;
       fo(i,0,N-1){
           if(v[i][j]==0)
           o++;
           else
           {
               e++;
           }
       }
       A[0][j]=o;
       A[1][j]=e;
     }
}
void decToBinary(int n) 
{ 
    vll b(32,0) ;
    int i =0; 
    while (n > 0) { 
        b[i]=n%2; 
        n = n / 2; 
        i++; 
    } 
   v.pb(b);
} 

ll NcR(ll n, ll r)
{

    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
   ll m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
    return p%md;
}
int main(){
 fast

    cin>>N;
    ll x;
   int a[N];
   for(int i=0;i<N;i++){
       cin>>a[i];
       decToBinary(a[i]);
   }
   con();
    int q;
    cin>>q;
    int m;
    int ans=0;
    vll dp(N+1);
    while(q--){
        ans=0;
        cin>>m;
        ll g=0,res=0;
     fo(l,1,m){
         ans=0;
         if(dp[l]>0){
             res+=dp[l];
             continue;
         }
         fo(j,0,31){
             if(A[1][j]>0){
                 //cout<<A[1][j]<<" "<<A[0][j]<<" ";
                 g=0;
            for(ll p=1;p<=l;p+=2){
                if(A[1][j]>=p&&A[0][j]>=l-p){
                    ll u=NcR(A[0][j],l-p);
                       x=NcR(A[1][j],p);
                       g+=u*x;
                    //cout<<u<<" "<<x<<"\n";
                }
            }
            ans+=(g*pow(2,j));
            ans%=md;
            }
            
        }
        dp[l]=ans;
        res+=ans;

      }
cout<<res<<"\n";

    }

return 0;
}