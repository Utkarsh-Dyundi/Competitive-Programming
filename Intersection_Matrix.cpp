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

void subsetsUtil(vector<ll>& A, vector<vector<ll> >& res,
                 vector<ll>& subset, ll index)
{
    res.push_back(subset);
    for (ll i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        subsetsUtil(A, res, subset, i + 1);
        subset.pop_back();
    }
  
    return;
}

vector<vector<ll> > subsets(vector<ll>& A)
{
    vector<ll> subset;
    vector<vector<ll> > res;
    ll index = 0;
    subsetsUtil(A, res, subset, index); 
    return res;
}

int main(){
 fast
tc{
    ll n,m,b;
    cin>>n>>m>>b;
    ll x;
    vector<vll> a(n);
    vll u,v;
    fo(i,0,n-1){
        fo(j,0,m-1){
            cin>>x;
            a[i].pb(x);
        }
    }
    fo(i,0,n-1){
        u.pb(i);
    }
    fo(i,0,m-1){
        v.pb(i);
    }
    vector<vector<ll> > res1 = subsets(u);
    vector<vector<ll> > res2 = subsets(v);
    ll ans=0;
    
    for(auto i:res1){
        for(auto j:res2){
            ll sum=0;
            for(auto k:i){
                for(auto l:j){
                  sum+=a[k][l];
                }
            }
            if(sum==b){
                ans++;
            }
        }
    }
    
    cout<<(ans)%mod<<"\n";
}

return 0;
}