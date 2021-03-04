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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2&&y2==y1){
        cout<<"SECOND\n";
    }
    else if(abs(x1-x2)==1&&abs(y1-y2)==1){
         cout<<"FIRST\n";
    }
    else if((x1==x2&&abs(y1-y2)==1)||(y1==y2&&abs(x1-x2)==1)){
         cout<<"FIRST\n";
    }
    else{
         cout<<"DRAW\n";
    }
}

return 0;
}