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
    string s;
    cin>>s;
    ll n;
    ll x;
    cin>>n;
    ll k=0;
    map<char,ll> m;
     char c='a',b;
    fo(i,0,25){
        cin>>x;
        m[c]=x;
        k=max(k,x);
        if(x==k){
            b=c; 
        }
        c++;
    }
    ll ans=0,i;
    for(i=1;i<=s.size();i++){
           ans+=i*m[s[i-1]];
    }
    fo(j,0,n-1){
        ans+=i*m[b];
        i++;
    }
    cout<<ans;
return 0;
}