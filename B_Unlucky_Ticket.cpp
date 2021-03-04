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

int main(){
 fast

    ll n;
    cin>>n;
    string s;
    cin>>s;
  vector<char> s1,s2;
  fo(i,0,n-1){
       s1.pb(s[i]);
  }
    ll m=2*n;    
    ll r=0;
     fo(i,n,m-1){
       s2.pb(s[i]);
  }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    ll ans=0;
    if(s1[0]>s2[0]){
        fo(i,1,n-1){
            if(s1[i]<=s2[i]){
                ans=1;
                break;
            }
        }
    }
    else if(s1[0]<s2[0]){
        fo(i,1,n-1){
            if(s1[i]>=s2[i]){
                ans=1;
                break;
            }
        }
    }
    if(s1[0]==s2[0]){
        no;
    }
    else{
        if(ans==0)
        yes;
        else
        {
            no;
        }

    }
  
return 0;
}
