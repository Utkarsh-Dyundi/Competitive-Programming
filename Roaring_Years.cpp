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

// bool check( n){

// }
int main(){
fast
ll t;
cin>>t;
fo(l,1,t){
    string s;
    cin>>s;
    ll n=s.size();
    ll k=n/2;
    string h,g;
    vector<string> ans;
    ll q;
    for(ll i=k-1;i>=0;i--){
        string r="";
        fo(j,0,i){
            r+=s[j];
        }
        g=r;
        while(r.size()<n){
             q=-1;
             h=g;
             ll u=h.size();
             if(h[u-1]=='9'){
                for(ll d=u-1;d>=0;d--){
                    if(h[d]!='9'){
                        q=d;
                        break;
                    }
                 }
                 if(q==-1){
                     h[q+1]+=1;
                 fo(o,q+2,g.size()-1){
                     h[o]='0';
                 }
                 h+='0';
                 }
                 else{
                 h[q]+=1;
                 fo(o,q+1,g.size()-1){
                     h[o]='0';
                 }
                 }
             }
             else{
                 h[u-1]=h[u-1]+1;
             }
             g=h;
             r+=h;
        }
        cout<<r<<" ";
    }
    cout<<"\n";
}
return 0;
}