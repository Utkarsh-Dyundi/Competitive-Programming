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

int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    vll l(n),r(n);
    ll a=0,b=0,d=0;
    fo(i,0,n-1){
        while(i<n&&s[i]=='*'){
            l[i]=c;
            i++;
            b++;
            d++;
        }
        while(i<n&&s[i]=='.'){
            a++;
            i++;
        }
        i--;
        c+=(d*a);
        a=0;
        b=0;
    }
    c=0;
    a=0;
    b=0;
    for(ll i=n-1;i>=0;i--){
        while(i>=0&&s[i]=='*'){
            r[i]=c;
            i--;
            b++;
        }
        while(i>=0&&s[i]=='.'){
            a++;
            i--;
        }
        i++;
        c+=a*b;
        a=0;
    }
    // printv(l);
    // printv(r);
    set<ll> ans;
    fo(i,0,n-1){
        if(s[i]=='*'){
        ans.insert(l[i]+r[i]);
        }
    }
    // printv(l);
    // printv(r);
    ll res=0;
    for(auto i:ans){
        res=i;
        break;
    }
    cout<<res<<"\n";
}

return 0;
}