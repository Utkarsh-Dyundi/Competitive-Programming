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
    vector<int> b(n+1),u(n+1);
    vector<int> ans(n);
    int c1=0;
    for(int i=0;i<n;i++){
        b[a[i]]=1;
    }
    vector<int> v;
    fo(i,1,n){
        if(b[i]==0){
            v.pb(i);
        }
    }
    for(auto i:v){
        if(u[a[i-1]]==0){
        ans[i-1]=a[i-1];
        c1++;
        }
        u[a[i-1]]=1;
    }
    fo(i,0,n-1){
        if(u[a[i]]==0){
            ans[i]=a[i];
            c1++;
        }
        u[a[i]]=1;
    }
    vector<int> k;
    fo(i,1,n){
        if(u[i]==0){
            k.pb(i);
        }
    }
    int j=0;
    int z=1;
    sort(k.begin(),k.end(),greater<ll>());
    fo(i,0,n-1){
        if(ans[i]==0){
            if(k[j]==i+1){
                swap(k[j],k[j+1]);
            }
            ans[i]=k[j];
            j++;
        }
    }
    cout<<c1<<"\n";
    printv(ans);
}

return 0;
}