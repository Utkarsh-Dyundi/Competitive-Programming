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
string s;
bool a[5]={false};
cin>>s;
for(int i=0;i<s.size();i++){
    if(a[0]==false&&s[i]=='h')
    a[0]=true;
    else if(a[1]==false&&s[i]=='e'&&a[0]==true)
       a[1]=true;
    else if(a[2]==false&&s[i]=='l'&&a[1]==true)
       a[2]=true;
    else if(a[3]==false&&s[i]=='l'&&a[2]==true)
       a[3]=true;
    else if(a[4]==false&&s[i]=='o'&&a[3]==true)
       a[4]=true;   
}
ll c=0;
for(int i=0;i<5;i++){
  
    if(a[i]==false)
    c=1;
}
if(c==0)
yes;
else
no;
return 0;
}