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
string s;
cin>>s;
ll c=0;
ll ans=0;
set<pair<ll,ll>> se;
se.insert({7500,7500});
ll a1=7500,b1=7500,a2=7500,b2=7500;
fo(i,0,n-1){
    if(c%2==0){
        if(s[i]=='U')
        b1++;
        else if(s[i]=='D')
        b1--;
        else if(s[i]=='L')
        a1--;
        else
        {
            a1++;
        }  
        se.insert({a1,b1});
    }
    else{
        if(s[i]=='U')
        b2++;
        else if(s[i]=='D')
        b2--;
        else if(s[i]=='L')
        a2--;
        else
        {
            a2++;
        } 
        se.insert({a2,b2});
    }
    c++;
}
cout<<se.size();
return 0;
}