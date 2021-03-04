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

void MaxOfMin(int arr[], int n) 
{ 

    stack<int> s;  
    int left[n+1];   
    int right[n+1];  
    for (int i=0; i<n; i++) 
    { 
        left[i] = -1; 
        right[i] = n; 
    } 
   
    for (int i=0; i<n; i++) 
    { 
        while (!s.empty() && arr[s.top()] >= arr[i]) 
            s.pop(); 
  
        if (!s.empty()) 
            left[i] = s.top(); 
  
        s.push(i); 
    } 
while (!s.empty()) 
        s.pop(); 
 
    for (int i = n-1 ; i>=0 ; i-- ) 
    { 
        while (!s.empty() && arr[s.top()] >= arr[i]) 
            s.pop(); 
  
        if(!s.empty()) 
            right[i] = s.top(); 
  
        s.push(i); 
    } 
  
    int ans[n+1]; 
    for (int i=0; i<=n; i++) 
        ans[i] = 0; 
for (int i=0; i<n; i++) 
    { 
       
        int len = right[i] - left[i] - 1; 
  
    
        ans[len] = max(ans[len], arr[i]); 
    } 

    for (int i=n-1; i>=1; i--) 
        ans[i] = max(ans[i], ans[i+1]); 
 int ma=INT_MIN;
    for (int i=1; i<=n; i++)
        ma=max(ma,ans[i]*i);
        cout<<ma;
} 
        
int main(){
 fast

    int n;
    cin>>n;
    int x;
    int a[n];
    fo(i,0,n-1){
        cin>>a[i];
    }
    MaxOfMin(a,n);
    
return 0;
}