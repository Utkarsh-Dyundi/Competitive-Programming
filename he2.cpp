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
    if(n==1)
    {
        cout<<1<<" "<<1<<"\n";
        continue;
    }
    if(n==2){
        cout<<2<<" "<<2<<" "<<1<<"\n";
        continue;
    }
    if(n==3){
        cout<<0<<"\n";
        continue;
    }

    ll p=n-3;
    ll k=p%4;

    if(k==0){
        cout<<0<<"\n";
        continue;
    }    
    if(k==1){
        cout<<1<<" "<<n<<"\n";
    }
    else if(k==2){
        cout<<1<<" "<<1<<"\n";
    }
    else if(k==3){
        cout<<2<<" "<<n<<" "<<1<<"\n";
    }
}

return 0;
}