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

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long double sr = sqrt(x);
        
        return (sr * sr == x);
    }
    return false;
}
int Sum(int n)
    {
        int sum;
 
        for (sum = 0; n > 0; sum += n % 10, n /= 10)
            ;
 
        return sum;
    }

int main(){
 fast

    ll n;
    ll k=0;
    cin>>n;
    fo(i,1,9999999){
        long double k=i;
          if(isPerfectSquare(k)){
              if((i+Sum(sqrt(i))*sqrt(i)-n)==0){
                  cout<<sqrt(i);
                  return 0;
              }
          }
    }

   cout<<-1;
return 0;
}