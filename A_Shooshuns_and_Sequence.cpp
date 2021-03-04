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


int main(){
 fast
 ll n,k,x;
 vll a;
 cin>>n>>k;
fo(i,0,n-1){
 cin>>x;
a.pb(x);
}
ll v=a[k-1];
ll c=0;
fo(i,k,n-1){
    if(a[i]!=v)
    {
        c=1;
        break;
    }
}
ll i=k-1;
ll d=-1;
while(a[i]==v){
d++;
i--;
}
if(c==0){
    cout<<k-1-d;
}
else{
    cout<<-1;
}
return 0;
}