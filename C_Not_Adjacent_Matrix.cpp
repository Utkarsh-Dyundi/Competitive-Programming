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
    if(n==2){
        cout<<-1<<"\n";
        continue;
    }
    if(n==1){
        cout<<1<<"\n";
        continue;
    }
    else{
        ll ans[n][n];
        fo(i,0,n-1){
            fo(j,0,n-1){
            ans[i][j]=0;
            }
        }
        ll c=0;
        ll k=1;
        ll p=n*n;
        fo(i,0,n-1){
            fo(j,0,n-1){
            if(k>p){
                c=1;
                break;
            }
            ans[i][j]=k;
            k+=2;
            }
            if(c==1)
            break;
        }
        c=0;
        k=2;
        fo(i,0,n-1){
            fo(j,0,n-1){
            if(k>p){
                c=1;
                break;
            }
            if(ans[i][j]==0){
            ans[i][j]=k;
            k+=2;
            }
            }
            if(c==1)
            break;
        }
        fo(i,0,n-1){
            fo(j,0,n-1){
            cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
}

return 0;
}