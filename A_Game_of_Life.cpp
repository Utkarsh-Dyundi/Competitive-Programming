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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vll a;
    fo(i,0,n-1){
        if(s[i]=='1'){
            a.pb(i);
        }
    }
    if(a.size()==0){
         cout<<s<<"\n";
         continue;
    }
    if(a.size()==1){
        ll j=0;
        for(ll i=a[0]-1;i>=0;i--){
              if(j==m){
                  break;
              }
              s[i]='1';
              j++;
        }
        j=0;
        fo(i,a[0]+1,n-1){
            if(j==m){
                break;
            }
            s[i]='1';
            j++;
        }
        cout<<s<<"\n";
        continue;
    }
    vll ans;
    ll c=a[0];
    c=min(c,m);
    ans.pb(a[0]-c);
    vector<pair<ll,ll>> v;
    v.pb({a[0]-c,a[0]});
    fo(i,0,a.size()-2){
        if(a[i-1]+2==a[i]&&a[i]+2==a[i+1]){
            v.pb({a[i],a[i]});
            continue;
        }
        ll d=a[i+1]-a[i];
        d--;
        if(d==1)
        continue;
        d/=2;
       // cout<<a[i]<<" "<<a[i+1]<<"\n";
        ll k=min(m,d);
        v.pb({a[i],a[i]+k});
        v.pb({a[i+1]-k,a[i+1]});
    }
    ll k=n-a[a.size()-1]-1;
    k=min(k,m);
    v.pb({a[a.size()-1],a[a.size()-1]+k});
    ans.pb(a[a.size()-1]+k);
    vll res(n);
   for(auto i:v){
      // cout<<i.F<<" "<<i.S<<"\n";
       fo(j,i.F,i.S){
           res[j]=1;
       }
   }
    for(auto i:res){
        cout<<i;
    }
    cout<<"\n";
}

return 0;
}