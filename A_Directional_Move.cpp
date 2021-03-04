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
#define printv(v,n) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";

int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll v=0,u=0;
    fo(i,0,n-1){
        if(s[i]=='0'){
            u++;
        }
        else{
            v++;
        }
    }
    if(v==u){
        cout<<"E\n";
    }
    else if(v>u){
        v=v-u;
        v=v%4;
        if(v==0){
            cout<<"E\n";
        }
        else if(v==1){
            cout<<"N\n";
        }
        else if(v==2){
            cout<<"W\n";
        }
        else if(v==3){
            cout<<"S\n";
        }
    }
    else{
        u=u-v;
        u=u%4;
        if(u==0){
            cout<<"E\n";
        }
        else if(u==3){
            cout<<"N\n";
        }
        else if(u==2){
            cout<<"W\n";
        }
        else if(u==1){
            cout<<"S\n";
        }
    }
}

return 0;
}