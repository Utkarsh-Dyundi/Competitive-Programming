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




int main(){
 fast
ll n;
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<n-i;j++)
    cout<<"  ";
    for(int k=0;k<=i;k++){
    if(i==0&&k==0)
    cout<<k;
    else
    cout<<k<<" ";
    }
    for(int h=i-1;h>=0;h--){
    if(h==0)
    cout<<h;
    else
    cout<<h<<" ";
    }
    
    cout<<"\n";
}
for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++)
    cout<<"  ";
    for(int k=0;k<=n-i;k++){
    if(i==n)
    cout<<0;
    else
    cout<<k<<" ";
    }
    for(int h=n-i-1;h>=0;h--){
    if(h==0)
    cout<<h;
    else
    {
        cout<<h<<" ";
    }
    
    }
    cout<<"\n";
}
return 0;
}