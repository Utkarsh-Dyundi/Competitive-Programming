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
ll n;
cin>>n;
vll q;
ll x;
fo(i,0,n-2){
    cin>>x;
    q.pb(x);
}
vll v(n);
vll p(n);
v[0]=1;
p[0]=v[0];
fo(i,1,n-1){
    v[i]=v[i-1]+q[i-1];
    p[i]=v[i];

}
ll check=0;
sort(p.begin(),p.end());
fo(i,0,n-2){
    if(p[i]+1!=p[i+1]){
        check=1;
    }
}
if(check==1){
    cout<<-1<<"\n";
}
else{
    ll min=1-p[0];
    fo(i,0,n-1){
        cout<<v[i]+min<<" ";
    }
    cout<<"\n";
}
return 0;
}