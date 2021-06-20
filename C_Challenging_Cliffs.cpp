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
    ll x;
    vll a;
    forin(a,x,n);
    sort(full(a));
    //printv(a);
    ll c;
    ll m=INT_MAX;
    fo(i,1,n-1){
        ll d=a[i]-a[i-1];
        if(d<m){
            m=d;
            c=i;
        } 
    }
    //cout<<c<<" ";
    if(c!=1&&c!=n-1){
            cout<<a[c-1]<<" ";
            fo(i,c+1,n-1){
                 cout<<a[i]<<" ";
            }
            fo(i,0,c-2){
                 cout<<a[i]<<" ";
            }
            cout<<a[c]<<"\n";
            continue;
    }

    if(c==1){
        cout<<a[c-1]<<" ";
        fo(i,2,n-1){
            cout<<a[i]<<" ";
        }
        cout<<a[1]<<" "<<"\n";
        continue;
    }

    if(c==n-1){
        cout<<a[n-2]<<" ";
        fo(i,0,n-3){
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<"\n";
    }
}

return 0;
}