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
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    fo(i,0,n-1){
       cin>>x;
       a.pb(x);
    }
    if(n<3){
        cout<<0<<"\n";
        continue;
    }
    char c='e';
    ll ans=0,d=0,e=0;
    vector<char> v(n+1,'l');
    fo(i,1,n-2){
        if(a[i-1]>a[i]&&a[i+1]>a[i]){
       //cout<<i<<" ";
                v[i]='v';
                ans++;
        }
       else if(a[i-1]<a[i]&&a[i+1]<a[i]){
          // cout<<i<<" ";
                v[i]='h';
                ans++;
        }
    }
    ll j=0;
    fo(i,1,v.size()-2){
        if(v[i]=='v'){
            if(v[i-1]=='h'&&v[i+1]=='h'){
                e=1;
            }
            else if(v[i-1]=='h'||v[i+1]=='h'){
                 d=1;
            }
        }
        else if(v[i]=='h'){
            if(v[i-1]=='v'&&v[i+1]=='v'){
                e=1;
            }
            else if(v[i-1]=='v'||v[i+1]=='v'){
                 d=1;
            }
        }
    }
    if(ans==0){
        cout<<0<<"\n";
    }
    else {
        if(e==1){
            cout<<ans-3<<"\n";
        }
        else if(d==1){
            cout<<ans-2<<"\n";
        }
        else{
            cout<<ans-1<<"\n";
        }
    }
}

return 0;
}