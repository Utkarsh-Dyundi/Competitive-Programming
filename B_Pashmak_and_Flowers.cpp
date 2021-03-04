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



int main(){
 fast
ll n;
cin>>n;
ll sum=0;
ll j=n;
j--;
while(j>0){
    sum+=j;
    j--;
}
ll x;
vll a;
fo(i,0,n-1){
    cin>>x;
    a.pb(x);
}
sort(a.begin(),a.end());
ll c1=0,c2=0;
fo(i,0,n-1){
    if(a[i]==a[0])
    c1++;
    else if(a[i]==a[n-1])
    c2++;
}
if(a[0]==a[n-1])
cout<<a[n-1]-a[0]<<" "<<sum;
else
{
    cout<<a[n-1]-a[0]<<" "<<c1*c2;
}

return 0;
}