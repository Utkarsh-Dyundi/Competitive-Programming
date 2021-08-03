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
    ll n;
    cin>>n;
    ll e=n/10;
    e--;
    ll d=n%10;
    if(n==10){
        cout<<25<<"\n";
        continue;
    }
    if(n>10)
    d+=10;
    ll ans=0;
    if(e>0){
        ans+=e*25;
    }
    if(d<=6){
        ans+=15;
    }
    else if(d>6&&d<=8){
        ans+=20;
    }
    else if(d>8&&d<=10){
        ans+=25;
    }
    else if(d>10&&d<=12){
        ans+=30;
    }
    else if(d>12&&d<=14){
        ans+=35;
    }
    else if(d>14&&d<=16){
           ans+=40;
    }
    else if(d>16&&d<=18){
        ans+=45;
    }
    else{
        ans+=50;
    }
    cout<<ans<<"\n";
}

return 0;
}