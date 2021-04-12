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
ll t;
cin>>t;
fo(i,0,t-1){
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    cout<<"Case #"<<i+1<<": ";
    ll c=0;
    fo(i,1,n-1){
        if(a[i]<=a[i-1])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    cout<<0<<"\n";
    else{
        //   ll ans=0,l=0,p=0,o=0,j=0,nine=0,k;
        //   fo(i,1,n-1){
        //       if(a[i]<=a[i-1]&&o==0){
        //           j=i-1;
        //           o=a[i-1];
        //            k=a[i-1];
        //           while(k){
        //               ll v=k%10;
        //              l++;
        //              k/=10;
        //              if(k>9&&v==9){
        //                  nine++;
        //              }
        //           }
        //           k=a[i];
        //           while(k){
                   
        //              p++;
        //              k/=10;
                     
        //           }
        //           ans+=(l-p);
        //           if(nine==l-1)
        //           ans++;

        //           cout<<ans<<"\n";
        //       }
        //       else if(a[i]<=o){
        //             k=a[i];
        //             p=0;
        //              while(k){
        //                 p++;
        //                 k/=10;
        //              }
        //              ll u=abs(l-p);
        //              if(u==1&&o-a[i]>=(i-j)){
        //                  ans+=(abs(l-p));
        //              }

        //       }
        //   }

        ll ans=0,k=0;
        if(a[0]>=a[1]){
            k=a[1];
            ll p=0,l=0;
            while(k){
                p++;
                k/=10;
            }
            while(k){
               l++;
               k/=10;
            }
        }
    }
}

return 0;
}