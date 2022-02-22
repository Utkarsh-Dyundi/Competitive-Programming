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
    ll c=0,s=0;
    fo(i,0,n-1){
        s+=a[i];
    }
    ll d=n*(n+1)/2;
    if(s%d!=0){
        no;
        continue;
        c=1;
    }
    s/=d;
    //cout<<s<<" ";
    vll ans(n);
    fo(i,0,n-1){
        if(i!=n-1){
        ll e=a[i+1]-a[i];
        ll p=s-e;
        if(p<=0){
            c=1;
            break;
        }
           if(p%n!=0){
               c=1;
               break;
           }
           else{
               ans[i+1]=p/n;
           }
        }
        else{
             ll e=a[0]-a[i];
             ll p=s-e;
    if(p<=0){
            c=1;
            break;
        }
           if(p%n!=0){
               c=1;
               break;
           }
           else{
               ans[0]=p/n;
           }
        }
    }
    fo(i,0,n-1){
        if(ans[i]==0){
            c=1;
            break;
        }
    }
    if(c==1){
        no;
    }
    else
    {
        yes;
        printv(ans);
    }
}

return 0;
}