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

ll a,b,c;
cin>>a>>b>>c;
ll ans1=0,ans2=0,ans3=0;
ll ans4=a/3+b/3+c/3;
if(a>0&&b>0&&c>0){
    ans1=1;
    a--;
    b--;
    c--;
    ans1+=(a/3+b/3+c/3);
    if(a>0&&b>0&&c>0){
        ans2=2;
        a--;
        b--;
        c--;
        ans2+=(a/3+b/3+c/3);
    }
    if(a>0&&b>0&&c>0){
        ans3=3;
        a--;
        b--;
        c--;
        ans3+=(a/3+b/3+c/3);
    }
}



//cout<<ans1<<" "<<ans2<<" "<<ans3<<" ";
ll ans=max(ans1,max(ans2,ans3));
cout<<max(ans,ans4);
return 0;
}