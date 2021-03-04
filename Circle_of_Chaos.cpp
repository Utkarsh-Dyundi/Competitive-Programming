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


ll check(ll a,ll b){
	if (a == 0)
        return b;
    return check(b%a, a);
}

int main(){
    fast;
	tc{
		ll n,m;
		cin>>n>>m;
		vll arr;
		ll temp,gc1;
		cin>>temp;
		gc1=temp;
		for(ll i=1;i<m;i++){
			cin>>temp;
			gc1=check(gc1,temp);
		}
        if(n==1)
        cout<<0<<"\n";
        else{
            ll ans=0,i;
		for(i=0;i*i<=gc1;i++){
                  if(gc1%i==0&&i<=n){
                       ans=max(ans,i);
                  }
                  else if(gc1%1==0&&(gc1/i)<=n)
                  ans=max(ans,gc1/i);
        }
        cout<<ans<<"\n";
	}
    }


return 0;
}
