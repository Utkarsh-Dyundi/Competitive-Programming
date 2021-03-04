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
#define S second
#define F first
#define vll vector<ll>
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0);




int main(){
 fast
 ll k;
 cin>>k;
string s;
cin>>s;
unordered_map<char,int> m;
for(int i=0;i<s.size();i++){
    m[s[i]]++;
}
ll p=0;
for(int i=0;i<s.size();i++){
    if(m[s[i]]%k!=0){
        p=1;
        cout<<-1;
        break;
    }
}
vector<char> v;
if(p==0){
    for(auto i:m)
    {
        ll d=i.S/k;
        for(int j=0;j<d;j++){
           
            v.pb(i.F);
        }

    }
    for(int i=0;i<k;i++){
        for(auto i:v)
        cout<<i;
    }
}
return 0;
}