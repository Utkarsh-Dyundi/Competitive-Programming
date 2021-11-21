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
#define fast ios_base::sync_with_stdio(false); cin.tie(0);
#define fo(i,s,e) for(long long int i=s;i<=e;i++)
#define F first
#define S second
#define tc ll t;cin>>t; while(t--)
#define forin(v,x,n) fo(i,0,n-1){cin>>x;v.pb(x);}
#define printv(v) for(auto i:v){cout<<i<<" ";} cout<<"\n";
#define full(v) v.begin(),v.end()

int main(){
 fast
 int t;
 cin>>t;
fo(l,1,t){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> a(n);
    fo(i,0,n-1){
        a[i]=s[i];
    }
    int c;
    while(c!=0){
          c=0;
          vll p;
          fo(i,0,a.size()-2){
              if(a[i]=='0'&&a[i+1]=='1'){
                      a[i]='2';
                      i++;
                      p.pb(i);
              }
           }
           int d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              cout<<a.size();
           p.clear();
           fo(i,0,a.size()-2){
              if(a[i]=='1'&&a[i+1]=='2'){
                      a[i]='3';
                      i++;
                      p.pb(i);
              }
           }
            d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
           fo(i,0,a.size()-2){
              if(a[i]=='2'&&a[i+1]=='3'){
                  a[i]='4';
                      i++;
                      p.pb(i);
           }
           }
           d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){ 
     
              if(a[i]=='3'&&a[i+1]=='4'){
                  a[i]='5';
                      i++;
                      p.pb(i);
              }
          }
           d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){
              if(a[i]=='4'&&a[i+1]=='5'){
                  a[i]='6';
                      i++;
                      p.pb(i);
              }
          }
          d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
             p.clear();
          fo(i,0,a.size()-2){
             if(a[i]=='5'&&a[i+1]=='6'){
                  a[i]='7';
                      i++;
                      p.pb(i);
              }
          }
          d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){
              
              if(a[i]=='6'&&a[i+1]=='7'){
                  a[i]='8';
                      i++;
                      p.pb(i);
              }
          }
         d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){
             
              if(a[i]=='7'&&a[i+1]=='8'){
                  a[i]='9';
                      i++;
                      p.pb(i);
              }
          }
         d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){
              
              if(a[i]=='8'&&a[i+1]=='9'){
                  a[i]='0';
                      i++;
                      p.pb(i);
              }
          }
         d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              p.clear();
          fo(i,0,a.size()-2){
              if(a[i]=='9'&&a[i+1]=='0'){
                  a[i]='1';
                      i++;
                      p.pb(i);
              }
          }
         d=0;
            for(auto j:p){
                  d++;
                  c++;
                  a.erase(a.begin()+j-d+1);
              }
              cout<<c<<"\n";
          }
    cout<<"Case #"<<l<<": ";
    for(auto i:a){
        cout<<i;
    }
    cout<<"\n";
}

return 0;
}