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
#define printv(v,n) fo(i,0,n-1){cout<<v[i]<<" ";} cout<<"\n";
int max(int x, int y) 
{ 
    return (x > y) ? x : y; 
} 

int solve(vll arr, int n) 
{ 

    if (n <= 1) 
        return 0; 
    if (arr[0] == 0) 
        return -1; 
    int r = arr[0]; 
    int step = arr[0]; 
    int jump = 1; 
    int i = 1; 
    for (i = 1; i < n; i++) { 
         if (i == n - 1) 
            return jump; 
        r = max(r, i + arr[i]); 
  
         step--; 
  
         if (step == 0) { 
             jump++; 
  
             if (i >= r) 
                return -1; 

            step = r - i; 
        } 
    } 
  
    return -1; 
} 

int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    cout<<solve(a,n)<<"\n";
}

return 0;
}