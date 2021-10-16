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
    deque<ll> q;
    ll c=0;
    ll f;
    if(a[0]==1){
        q.push_front(a[0]);
        c=1;
    }
    else{
        q.push_front(a[0]);
    }
    f=a[0];
    for(int i=1;i<n;i++){
           if(c==1){
               q.push_back(a[i]);
               continue;
           }
           if(a[i]<f){
               f=a[i];
               if(f==1)
               c=1;
               q.push_front(a[i]);
           }
           else{
               q.push_back(a[i]);
           }
    }
    for(auto i:q){
        cout<<i<<" ";
    }
    cout<<"\n";
}

return 0;
}