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
    ll x;
    vll a;
    forin(a,x,n);
    vll b(n+1,0),b1(n+1,0);
    vll ans1,ans2;
    ans1.pb(a[0]);
    ans2.pb(a[0]);
    b[a[0]]=1;
    b1[a[0]]=1;
    ll c=a[0];
   ll d=1;
    fo(i,1,n-1){
        if(a[i-1]==a[i]){
            while(b[d]==1){
                d++;
            }
            ans1.pb(d);
            b[d]==1;
            d++;
            while(b1[c]==1){
                c--;
                if(c==0){
                    break;
                }
            }
            ans2.pb(c);
            b1[c]=1;  
        }
        else{
            ans1.pb(a[i]);
            ans2.pb(a[i]);
            b[a[i]]=1;
            b1[a[i]]=1;
            c=a[i];
        }
    }
    printv(ans1);
    printv(ans2);
}

return 0;
}