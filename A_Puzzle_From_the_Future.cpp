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
#define printv(v) fo(i,0,n-1){cout<<v[i];} cout<<"\n";

int main(){
 fast
tc{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=1;
    vector<ll> v;
    v.pb(1);
    fo(i,1,s.size()-1){
        if(s[i]==s[i-1]){
            if(c==1){
                v.pb(0);
                c=0;
            }
            else{
            v.pb(1);
            c=1;
            }
            continue;
        }
        else{
            if(s[i-1]=='0'){
                v.pb(1);
                c=1;
            }
            else{
                if(c==1){
                v.pb(1);
                c=1;
                }
                else
                {
                    v.pb(0);
                    c=0;
                }
                

            }
        }
    }
    printv(v);
}

return 0;
}