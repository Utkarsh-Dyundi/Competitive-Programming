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

bool isPrime(int n)
{

    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int oneDigit(int num) 
{ 
    return (num >= 0 && num < 10); 
} 
  

bool isPalUtil(int num, int* dupNum) 
{ 
  
    if (oneDigit(num)) 
        return (num == (*dupNum) % 10); 
  
    if (!isPalUtil(num/10, dupNum)) 
        return false; 
  

    *dupNum /= 10; 
  
    return (num % 10 == (*dupNum) % 10); 
} 

int isPal(int num) 
{ 
  
    if (num < 0) 
       num = -num; 
  
   
    int *dupNum = new int(num); 
  
    return isPalUtil(num, dupNum); 
} 

int main(){
 fast
    ll n;
    cin>>n;
    ll x;
    vll a;
    fo(i,0,n-1){
      cin>>x;
      if(isPrime(x)&&isPal(x))
      cout<<"Yes\n";
      else
      {
          cout<<"No\n";
      }
      
    }


return 0;
}