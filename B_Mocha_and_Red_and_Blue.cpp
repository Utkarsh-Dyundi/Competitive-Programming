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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]!='?'){
        fo(i,1,n-1){
            if(s[i]=='?'){
                if(s[i-1]=='B'){
                    s[i]='R';
                }
                else{
                    s[i]='B';
                }
            }
        }
        cout<<s<<"\n";
    }
    else{
        string t=s;
        s[0]='B';
        t[0]='R';
        fo(i,1,n-1){
            if(s[i]=='?'){
                if(s[i-1]=='B'){
                    s[i]='R';
                }
                else{
                    s[i]='B';
                }
            }
        }
        fo(i,1,n-1){
            if(t[i]=='?'){
                if(t[i-1]=='B'){
                    t[i]='R';
                }
                else{
                    t[i]='B';
                }
            }
        }
        ll c1=0,c2=0;
        fo(i,0,n-2){
            if(s[i]==s[i+1]){
                c1++;
            }
            if(t[i]==t[i+1]){
                c2++;
            }
        }
        if(c1<c2){
            cout<<s<<"\n";
        }
        else{
            cout<<t<<"\n";
        }
    }
}

return 0;
}