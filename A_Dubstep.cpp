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
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v,n) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";
#define fo(i,s,e) for(long long int i=s;i<=e;i++)



int main(){
 fast
string s;
cin>>s;
ll n=s.size();
vector<char> v;
fo(i,0,s.size()){
    if(i<n-3){
     while(s[i]!='w'&&s[i+1]!='u'&&s[i+2]!='b'||s[i-1]!='w'&&s[i]!='u'&&s[i+1]!='b'||s[i-2]!='w'&&s[i-1]!='u'&&s[i]!='b'){
        cout<<s[i];
        if(i==n-1){
            break;
        }
     }
    cout<<" ";
    }
    else{
        if(s[n-3]!='w')
    }
}
printv(v,v.size());
return 0;
}