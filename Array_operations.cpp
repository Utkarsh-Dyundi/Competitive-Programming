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
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";

ll b=0,e=0;
int maxSubArraySum(vll a, ll size)
{
   int max_so_far = 0, max_ending_here = 0;
   for (int i = 0; i < size; i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0){
           max_ending_here = 0;
           b=i;
       }
       else{
           e=i;
       }
       if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}
int smallestSumSubarr(vll arr,ll n) 
{ 
    int min_ending_here = INT_MAX; 

    int min_so_far = INT_MAX; 
    for (int i=b; i<e+1; i++) 
    { 

        if (min_ending_here > 0) 
            min_ending_here = arr[i]; 
              else
            min_ending_here += arr[i]; 
        min_so_far = min(min_so_far, min_ending_here);             
    } 
    return min_so_far; 
} 
          
int main(){
 fast
tc{
    ll n;
    cin>>n;
    ll x;
    vll a;
    forin(a,x,n);
    vll ans;
    fo(i,0,n-1){
        ll c=0;
        while(a[i]>=0&&i<n){
            c+=a[i];
            i++;
        }
        ans.pb(c);
    }
    if(ans.size()==0){
        cout<<0<<" ";
        continue;
    }
    if(ans.size()==1){
        cout<<ans[0]<<"\n";
    }
    else {
        cout<<(maxSubArraySum(a,n)-smallestSumSubarr(a,n))<<"\n";
    }
}

return 0;
}