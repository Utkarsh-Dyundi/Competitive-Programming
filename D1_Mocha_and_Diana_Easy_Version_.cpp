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

struct node
{
    int par=-1;
    int rank=0;
};

int dsf(int n, vector<node>& a){
    if(a[n].par==-1){
        return n;
    }
    ll k=dsf(a[n].par,a);
    a[n].par=k;
    a[k].rank++;
    return k;
}
void dsu(int n, int m, vector<node>& a)
{
   ll topn=dsf(n,a);
   ll topm=dsf(m,a);
   if(a[topm].rank>a[topn].rank){
        a[topn].par=topm;
        a[topm].rank++;
   }
   else{
       a[topm].par=topn;
        a[topn].rank++;
   }
}

int main(){
 fast

    ll n,m1,m2;
    cin>>n>>m1>>m2;
     vector<node> a(n+1),b(n+1);
    fo(i,0,m1-1){
        ll x,y;
        cin>>x>>y;
        dsu(x,y,a);
    }
    fo(i,0,m2-1){
        ll x,y;
        cin>>x>>y;
        dsu(x,y,b);
    }
ll ans=0;
vector<pair<ll,ll>> res;
    fo(i,1,n){
        fo(j,i,n){
            ll topi1=dsf(i,a);
            ll topj1=dsf(j,a);
            ll topi2=dsf(i,b);
            ll topj2=dsf(j,b);
            if(topi1!=topj1&&topi2!=topj2){
                ans++;
                res.pb({i,j});
                dsu(i,j,a);
                dsu(i,j,b);
            }

        }
    }
    cout<<ans<<"\n";
    for(auto i:res){
        cout<<i.F<<" "<<i.S<<"\n";
    }


return 0;
}