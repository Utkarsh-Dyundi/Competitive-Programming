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
    ll n;
    cin>>n;
    ll x;
    vll a,b;
    forin(a,x,n);
    forin(b,x,n);
    map<ll,vll> m;
    ll mi=INT_MAX;
    fo(i,0,n-1){
        ll c=(a[0]+b[i])%n;
        m[c].pb(i);
        mi=min(mi,c);
    }
    if(m[mi].size()==1){
        vll ans;
        ll k=0;
        fo(i,m[mi][0],n-1){
            ans.pb((b[i]+a[k++])%n);
        }
        fo(i,0,m[mi][0]-1){
            ans.pb((b[i]+a[k++])%n);
        }
        printv(ans);
    }
    else{
        vll ans,ans1;
        ll k=0;
        fo(i,m[mi][0],n-1){
            ans.pb((b[i]+a[k++])%n);
        }
        fo(i,0,m[mi][0]-1){
            ans.pb((b[i]+a[k++])%n);
        }
        k=0;
        fo(i,m[mi][1],n-1){
            ans1.pb((b[i]+a[k++])%n);
        }
        fo(i,0,m[mi][1]-1){
            ans1.pb((b[i]+a[k++])%n);
        }
        k=-1;
        fo(i,0,n-1){
            if(ans[i]<ans1[i]){
                k=1;
                break;
            }
            else if(ans[i]>ans1[i]){
                k=2;
                break;
            }
        }
        if(k==1){
            printv(ans);
        }
        else if(k==2){
            printv(ans1);
        }
        else
        printv(ans);
    }

}

return 0;
}