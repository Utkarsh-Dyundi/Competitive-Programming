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
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i;} cout<<"\n";

int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[n-1]=='0'||s[0]=='0'){
    no;
    continue;
    }
    char v[n],u[n];
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        s[i]=='0'?b++:a++;
    }
    if(a%2!=0||b%2!=0){
        no;
        continue;
    }
    ll c=a;
    ll i=0;
    for(i=0;i<n;i++){
       if(s[i]=='1'){
           a--;
           v[i]='(';
           u[i]='(';
       }
       if(a==c/2){
           break;
       }
    }
    fo(j,i+1,n-1){
       if(s[j]=='1'){
           a--;
           v[j]=')';
           u[j]=')';
       }
       if(a==0){
           break;
       }
    }
    ll l=0;
    fo(j,0,n-1){
       if(s[j]=='0'){
           if(l==0){
           v[j]=')';
           u[j]='(';
           l=1;
           }
           else{
            u[j]=')';
           v[j]='(';
           l=0;
           }
       }
    }

    yes;
    printv(u);
    printv(v);
    }

return 0;
}