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
    ll n=s.size();
    ll c=0,o=0,d=0,e=0;
    ll u=0,v=0;
    fo(i,0,n-1){
        if(i!=0&&i!=n-1){
        if(s[i]=='e'){
            u=1;
        }
        else if(s[i]=='E'){
            v=1;
        }
        }
        if(s[i]=='C'){
            c=1;
        }
        if(s[i]=='o'){
            o=1;
        }
        if(s[i]=='D'){
            d=1;
        }
        if(s[i]=='e'){
            e=1;
        }
    }
    if(c==1&&o==1&&d==1&&e==1&&v==1&&u==1){
        cout<<"SELECTED\n";
    }
    else{
        cout<<"REJECTED\n";
    }
}

return 0;
}