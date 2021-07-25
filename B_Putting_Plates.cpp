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
tc{
    ll h,w;
    cin>>h>>w;
   int a[h][w]={0},b[h][w]={0};
   int a1=0,a2=0;
   fo(i,0,h-1)
    {
        fo(j,0,w-1){
            a[i][j]=0;
        }
    }
    cout<<"\n";
   fo(i,0,h-1)
    {
        fo(j,0,w-1){
            b[i][j]=0;
        }
 
    }

   for(int i=0;i<w;i+=2){
        a[0][i]=1;
        a1++;
   }
   ll p=2;
   for(int i=p;i<h;i+=2){
       a[i][w-1]=1;
       a1++;
   }
   p=w-3;
   for(int i=p;i>=0;i-=2){
       a[h-1][i]=1;
       a1++;
   }
   p=h-3;

   for(int i=p;i>=2;i-=2){
       a[i][0]=1;
       a1++;
   }


    for(int i=1;i<w;i+=2){
        b[0][i]=1;
        a2++;
   }
   p=2;

   for(int i=p;i<h;i+=2){
       b[i][w-1]=1;
       a2++;
   }
   p=w-3;

   for(int i=p;i>=0;i-=2){
       b[h-1][i]=1;
       a2++;
   }
   p=h-3;

   for(int i=p;i>=2;i-=2){
       b[i][0]=1;
       a2++;
   }
    if(a1>a2){
    fo(i,0,h-1)
    {
        fo(j,0,w-1){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    }
    else{
   fo(i,0,h-1)
    {
        fo(j,0,w-1){
            cout<<b[i][j];
        }
        cout<<"\n";
    }
    }
}

return 0;
}