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
    string s;
    cin>>s;
    ll a=0,b=0;
    fo(i,0,s.size()-1){
        if(s[i]=='0')
        a++;
        if(s[i]=='1')
        b++;
    }
    ll ans=0;
    if(a==0){
        ans=0;
    }
    else if(b==0){
        ans=1;
    }
    else{
        ans=2;
    }
   ll c=0;
    fo(i,0,s.size()-1){
        if(i==s.size()-1){
            if(s[i]=='0'){
                c++;
            }
        }
        else if(s[i]=='0'&&s[i+1]=='1'){
            c++;
        }
    }
    cout<<min(ans,c)<<"\n";
}

return 0;
}