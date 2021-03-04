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
    ll n,x;
    cin>>n>>x;
    ll y;
    vll a,b(n+1,1);
    fo(i,0,n-1){
        cin>>y;
        a.pb(y);
    }
    ll k=0,m1=0,m2=INT_MAX;
    fo(i,0,n-1){
        k=a[i];
      while(true){
              
            if(k%x==0){
                b[i]++;
                k/=x;
            }
            else{
                break;
            }
        }
        if(m2==b[i]){
            continue;
        }
        m2=min(m2,b[i]);
        if(m2==b[i]){
            m1=i;
        }
    }
    ll ans=0;
    fo(i,0,n-1){
        if(i<m1){
            ans+=a[i]*(m2+1);
        }
        else{
            ans+=a[i]*m2;
        }
    }
    cout<<ans<<"\n";
}

return 0;
}