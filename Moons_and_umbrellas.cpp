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
ll t;
 cin>>t;
fo(l,1,t){
    ll x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    ll ans=0;
    if(s.size()==1){
        cout<<"Case #"<<l<<": "<<0<<"\n";
        continue;
    }
    fo(i,0,s.size()-1){
        if(i==0){
        if(s[i]=='?'){
            s[i]=s[i+1];
        }
        }
        else if(i==s.size()-1){
            if(s[i]=='?'){
            s[i]=s[i-1];
        }
        }
        else if(s[i]=='?'){
            if(s[i-1]==s[i+1]){
                s[i]=s[i-1];
            }
            else if(s[i-1]=='C'&&s[i+1]=='J'){
                s[i]='J';
            }
            else if(s[i-1]=='J'&&s[i+1]=='C'){
                s[i]='C';
            }
        }
    }
    ll i=0;
    while(s[i]=='?'){
        i++;
    }
    fo(j,i+1,s.size()-1){
        if(s[j]=='?'){
            s[j]=s[j-1];
        }
    }
    fo(k,0,s.size()-2){
        if(s[k]=='C'&&s[k+1]=='J'){
            ans+=x;
        }
        else if(s[k]=='J'&&s[k+1]=='C')
        ans+=y;
    }



    cout<<"Case #"<<l<<": "<<ans<<"\n";
}

return 0;
}