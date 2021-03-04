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

    ll n;
    cin>>n;
    ll x;
    ll a[8]={0};
    fo(i,0,n-1){
        cin>>x;
        a[x]++;
    }
    
    ll m=n/3;
    if(a[1]==m&&a[2]+a[3]==m&&a[4]+a[6]==m&&a[2]>=a[4]&&a[3]<=a[6]){
        while(a[4]--){
            a[2]--;
            cout<<"1 2 4\n";
    }
    while(a[2]--){
        a[6]--;
        cout<<"1 2 6\n";
    }
    while(a[3]--){
        cout<<"1 3 6\n";
    }
}
else 
cout<<-1<<"\n";

return 0;
}