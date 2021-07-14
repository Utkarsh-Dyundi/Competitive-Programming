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
    vll a;
    forin(a,x,n);
    vll b;
    fo(i,0,n-1){
        b.pb(a[i]);
    }
    sort(b.begin(),b.end());

    multiset<ll> s1,s2;
    fo(i,0,n-1){
        if(i&1){
            s2.insert(a[i]);
        }
        else{
            s1.insert(a[i]);
        }
    }
    ll ans=0;
    fo(i,0,n-1){
        if(i&1){
            if(s2.find(b[i])!=s2.end()){
                auto it=s2.lower_bound(b[i]);
                s2.erase(it);
            }
            else{
                ans=1;
            }
        }
        else{
            if(s1.find(b[i])!=s1.end()){
                auto it=s1.lower_bound(b[i]);
                s1.erase(it);
            }
            else{
                ans=1;
            }
        }
        if(ans==1){
            break;
        }
        // for(auto i:s1){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        // for(auto i:s2){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
    }
    if(ans)
    no;
    else
    yes;

}

return 0;
}