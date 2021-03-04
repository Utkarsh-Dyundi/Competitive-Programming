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
string s;
cin>>s;
unordered_map<char, int> m;
fo(i,0,s.size()-1){
    m[s[i]]++;
}
ll e=0,o=0;
for(auto i:m){
    if(i.second%2==0)
    e++;
    else
    {
        
        o++;
    }
    
}
if(o<=0)
cout<<"First";
else if(o%2==1)
cout<<"First";
else 
cout<<"Second";

return 0;
}