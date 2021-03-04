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
tc{
    string s;
    cin>>s;
    ll m=0,a,b,c,d,n;

    fo(i,0,s.size()-4){
        a=0;
        b=0;c=0;d=0;
        if(s[i]=='M'){
            a++;
        }
        if(s[i+1]=='u'){
            b++;
        }
        if(s[i+2]=='d'){
            c++;
        }
        if(s[i+3]=='a'){
            d++;
        }
  
          n=a+b+c+d;
          m=max(m,n);
    }

   cout<<4-m<<"\n";
}

return 0;
}