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

    ll n;
    cin>>n;
    ll x;
    vll a;
    fo(i,0,n-1){
      cin>>x;
      a.pb(x);
    }
    ll k=0;
 fo(i,0,n-2){
        if(a[i]*2>=a[i+1]){
           k=1;
           break;
        }
       
    }

    if(k==0){
        cout<<1;
    }
    else{
   
    ll ans=0,c=0;
    fo(i,0,n-2){

        if(a[i]*2>=a[i+1]){
            c++;
        }
        else
        {
            c=0;
        }
        
        ans=max(ans,c);

       // cout<<1;
    }
    cout<<ans+1;
    }
return 0;
}
