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

int main(){
 fast
tc{
    ll n;
    cin>>n;
    char a[n][n];
    ll u1=-1,u2,v1,v2;
    fo(i,0,n-1){
        fo(j,0,n-1){
            cin>>a[i][j];
            if(a[i][j]=='*'){
               if(u1==-1){
                   u1=i;
                   v1=j;
               }
               else{
                   u2=i;
                   v2=j;
               }
            }
        }
    }
    if(u1!=u2&&v1!=v2){
        a[u1][v2]='*';
        a[u2][v1]='*';
    }
    else if(u1==u2){
        if(u1!=n-1){
        a[u1+1][v1]='*';
        a[u2+1][v2]='*';
        }
        else{
            a[u1-1][v1]='*';
        a[u2-1][v2]='*';
        }
    }
    else{
        if(v1!=n-1){
        a[u1][v1+1]='*';
        a[u2][v2+1]='*';
        }
        else{
            a[u1][v1-1]='*';
        a[u2][v2-1]='*';
        }
    }
    fo(i,0,n-1){
        fo(j,0,n-1){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}

return 0;
}