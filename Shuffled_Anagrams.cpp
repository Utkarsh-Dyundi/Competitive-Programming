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
ll t;
cin>>t;
fo(l,1,t){
    string s;
    cin>>s;
    cout<<"Case #"<<l<<": ";
    map<char,ll> m;
    fo(i,0,s.size()-1){
        m[s[i]]++;
    }
    ll ans=0;
    for(auto i:m){
        if(i.S>s.size()/2){
            ans=1;
            break;
        }
    }
    if(ans){
        cout<<"IMPOSSIBLE\n";
        continue;
    }
    vector<pair<char,ll>> r;
    fo(i,0,s.size()-1){
       r.pb({s[i],i});
    }
    sort(full(r));
    ll i=0, j=s.size()-1;
    string u=s;
    while(i<j){
        //cout<<r[i].S<<" "<<r[i].F<<" "<<r[j].S<<" "<<r[j].F<<"\n";
        s[r[i].S]=r[j].F;
        s[r[j].S]=r[i].F;
        i++;
        j--;
    }
    fo(i,0,s.size()-1){
       if(s[i]==u[i]){
           fo(j,0,s.size()){
               if(s[i]!=s[j]&&s[i]!=u[j]&&s[j]!=u[i]){
                   swap(s[i],s[j]);
                   break;
               }
           }
       }
    }
    cout<<s<<"\n";
    
}

return 0;
}