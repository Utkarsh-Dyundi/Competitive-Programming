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

    ll n,q,w;
    cin>>n>>q;
    ll x;
    queue<ll> a,b;
    fo(i,0,q-1){
         cin>>x;
         a.push(x);
    }
    cin>>w;
    fo(i,0,w-1){
        cin>>x;
        b.push(x);
    }
    ll ans=0,y;
    while(!a.empty()&&!b.empty()){
           x=a.front();
           a.pop();
           y=b.front();
           b.pop();
           ans++;
           if(x>y){
               a.push(y);
               a.push(x);
           }
           else{
               b.push(x);
               b.push(y);
           }
           if(ans==1000000){
               ans=-1;
               break;
           }
    }
    if(ans!=-1){
        if(b.empty()){
            cout<<ans<<" "<<1<<"\n";
        }
        else{
             cout<<ans<<" "<<2<<"\n";
        }
    }
    else{
        cout<<ans<<"\n";
    }


return 0;
}