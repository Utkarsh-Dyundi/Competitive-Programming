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
    ll n,p,q;
    cin>>n>>p>>q;
    ll x=0,y=0;
    ll c;
    string s;
    cin>>s;
    c=0;
    ll ans=0;
    for(auto i:s){
        if(i=='0'){
            c=1;
        }
        if(c==0){
            if(p>=x){
                x++;
            }
            else{
                x--;
            }
        }
        else{
            if(q>=y){
                y++;
            }
            else{
                y--;
            }
        }
        c=0;
    }
    if(x==p&&y==q){
        ans=1;
    }
    c=1;
    x=0;
    y=0;
    for(auto i:s){
        if(i=='0'){
            c=0;
        }
        if(c==0){
            if(p>=x){
                x++;
            }
            else{
                x--;
            }
        }
        else{
            if(q>=y){
                y++;
            }
            else{
                y--;
            }
        }
        c=1;
    }
    if(x==p&&y==q){
            ans=1;
    }
    if(ans)
    yes;
    else
    no;
}

return 0;
}