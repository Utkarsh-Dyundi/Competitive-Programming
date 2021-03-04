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
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int Count(string a, string b) 
{ 
    if(b.length() % a.length() != 0) 
        return -1; 
      
    int count = b.length() /a.length(); 
    string str = ""; 
    for(int i = 0; i < count; i++) 
    { 
        str = str + a; 
    } 
    if(str == b) 
        return count; 
      
    return -1;  
} 
int main(){
 fast

    ll q;
    cin>>q;
    while(q--){
    string s,t,u,v;
    cin>>s>> t;
    ll ans=0,m,n;
    fo(i,1,50)
  {
    fo(j,1,50)
    {
         m=i;
         n=j;         
       while(m--)
            u.append(s);
          
        while(n--)
        v.append(t);
       
         if((u.compare(v)) == 0)
        { ans=1;
          cout<<u<<"\n";
          break;
          }
          else
          {
           u.clear();
         v.clear();
            }
    }
    if(ans==1)
                    break;
            }
            if(ans==0)
                cout<<-1<<"\n";
    }


return 0;
}