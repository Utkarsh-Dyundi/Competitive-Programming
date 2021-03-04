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
 ll n,x,y,e,f;
cin>>n>>x>>y>>e>>f;
string str;
cin>>str;
char s,d;
if(x<=e)
s='E';
else
{
    s='W';
}
if(y<=f)
d='N';
else
{
    d='S';
}
ll c1=abs(x-e);
ll c2=abs(y-f);
ll ans=0;
if(c1==0&&c2==0)
cout<<0;
else{
for(int i=0;i<str.size();i++){
    if(c1!=0&&str[i]==s){
    c1--;
    }
    else if(c2!=0&&str[i]==d)
    {c2--;
    }
    if(c1==0&&c2==0){
        ans=i+1;
        break;
    }
}
if(c1==0&&c2==0){
    cout<<ans;
}
else
{
    cout<<-1;
}
}
return 0;
}