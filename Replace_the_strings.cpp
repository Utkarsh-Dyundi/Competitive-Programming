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
#define printv(v) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";

int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s,t,u="",v="";
    cin>>s>>t;
    vector<char> a,b;
    map<char,ll> m1,m2;
    fo(i,0,s.size()-1){
        if(s[i]!='?'){
        a.pb(s[i]);
        m1[s[i]]++;
        }
    }
    fo(i,0,t.size()-1){
        if(t[i]!='?'){
        b.pb(t[i]);
        m2[t[i]]++;
        }
    }
    ll y=m1.size();
    ll ti=m2.size();
    
    ll m=max(m1.size(),m2.size());
    ll c=0,k=0;
    if(n>10000){
    for(auto i:m1){
        k=0;
        for(auto j:m2){
            if(i.F==j.F){
                c+=abs(i.S-j.S);
            }
            else
            {
                k++;
            }
            if(k==m2.size()){
                c+=i.S;
            }
        }
    }
    ll h=0;
    for(auto i:m2){
        k=0;
        for(auto j:m1){
            if(i.F==j.F){
            h+=abs(i.S-j.S);
            }
            else
            {
                k++;
            }
            if(k==m1.size()){
                h+=i.S;
            }
        }
    }
    c=max(c,h);
    if(c>2)
    no;
    else
    {
        yes;
    }
    }
    else{
    ll c=0;
    fo(i,0,n-1){
        fo(j,0,n-1){
            if(s[i]==t[j]){
                c++;
                t[j]='T';
                break;
            }
        }
    }
    
    if(c<n-1)
    no;
    else
    {
        yes;
    }
    
    }
}

return 0;
}