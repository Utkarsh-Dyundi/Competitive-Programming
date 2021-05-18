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
#define full(a) a.begin(), a.end()

int main(){
 fast
ll n,a,x;
cin>>n>>a>>x;
ll b=n-a;
if(x>(a*b)){
    cout<<-1<<"\n";
    return 0;
}
vll v(b+1);
ll j=b;
fo(i,1,b){
    v[i]=x/j;
    x%=j;
    j--;
}
vll ans;
ll c=0;
fo(i,1,b){
    fo(j,1,v[i]){
        c++;
        ans.pb(0);
    }
    ans.pb(1);
}
while(c!=a){
    ans.pb(0);
    c++;
}
reverse(full(ans));
printv(ans);
return 0;
}