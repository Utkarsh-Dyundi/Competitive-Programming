
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

  set<string> s;
//gfg
void permute(string a, int l, int r,ll o) 
{ 
    if (l == r) 
        s.insert(a);
    else
    { 
        for (int i = l; i <= r; i++) 
        { 

            swap(a[l], a[i]); 
 
            permute(a, l+1, r); 
 
            swap(a[l], a[i]); 
        } 
    } 
} 
int main(){
 fast
tc{
    ll n,k;
    cin>>n>>k;
    ll x;
  
    char a[n];
    fo(i,0,n-3){
        a[i]='a';
    }
    a[n-2]='b';
    a[n-1]='b';
  
    string c="";
    fo(i,0,n-1){
        c=c+a[i];
    }
    s.insert(c);
    permute(c,0,n-1);
    ll ans=1;
    for(auto i:s){
        if(ans==k){
            cout<<i<<"\n";
            s.clear();
            break;
        }
        ans++;
    }
}

return 0;
}