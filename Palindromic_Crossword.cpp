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
ll t;
cin>>t;
fo(l,1,t){
    cout<<"Case #"<<l<<": ";
    ll r,c;
    cin>>r>>c;
    vector<vector<char>> v;
    v.resize(r,vector<char>(c));
    fo(i,0,r-1){
        fo(j,0,c-1){
            cin>>v[i][j];
        }
    }
  ll x=0,ans=0;
  fo(i,0,100){
      x=0;
    fo(i,0,r-1){
        fo(j,0,c-1){
            if(v[i][j]!='.'&&v[i][j]!='#'){
                ll d=j;
                ll co=0;
                while(d>=0&&v[i][d]!='#'){
                        d--;
                        co++;
                }
                ll e=j;
                while(e!=c&&v[i][e]!='#'){
                        e++;
                }
                //cout<<e<<" ";
                d--;
                co--;
                e--;
                e-=co;
               // cout<<e<<" "<<j<<"\n";
                if(v[i][e]=='.'){
                    x++;ans++;
                    v[i][e]=v[i][j];
                }

                 d=i;
                 co=0;
                while(d>=0&&v[d][j]!='#'){
                        d--;
                        co++;
                }
                e=i;
                while(e!=r&&v[e][j]!='#'){
                        e++;
                }
                //cout<<e<<" "<<co<<" ";
                d--;
                co--;
                e--;
                e-=co;
                //cout<<v[i][j]<<" "<<e<<" "<<i<<"\n";
                if(v[e][j]=='.'){
                    x++;ans++;
                    v[e][j]=v[i][j];
                }
            }
        }
    }
  }
  cout<<ans<<"\n";
    fo(i,0,r-1){
        fo(j,0,c-1){
            cout<<v[i][j];
        }
        cout<<"\n";
    }

}

return 0;
}