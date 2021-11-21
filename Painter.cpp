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
    map<int,vector<char>> m;
    fo(i,0,n-1){
        if(s[i]=='Y'||s[i]=='B'||s[i]=='R'){
            m[i].pb(s[i]);
        }
        else if(s[i]=='O'){
            m[i].pb('R');
            m[i].pb('Y');
        }
        else if(s[i]=='G'){
             m[i].pb('B');
             m[i].pb('Y');
        }
        else if(s[i]=='P'){
            m[i].pb('R');
            m[i].pb('B');
        }
        else if(s[i]=='A'){
            m[i].pb('R');
            m[i].pb('Y'); 
            m[i].pb('B');
        }
    }
    int ans=0;
    int c=1;
    int k=0;
    // for(auto i:m){
    //     cout<<i.F<<"\n";
    //     for(auto j:i.S){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }
    fo(i,0,n-1){
        // if(s[i]=='U'){
        //     cout<<i<<" ";
        // }
        if(i==0){
            ans+=m[i].size();
        }
        else{
            for(auto j:m[i]){
                int h=0;
                for(auto k:m[i-1]){
                    if(j==k){
                        h++;
                    }
                }
                if(h==0){
                    ans++;
                }
            }
        }
    }
    cout<<"Case #"<<l<<": "<<ans<<"\n";
}

return 0;
}