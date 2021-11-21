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
    string s;
    cin>>s;
    int c=0,d=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'&&s[i+1]=='b'){
            c++;
        }
        else if(s[i]=='b'&&s[i+1]=='a'){
            d++;
        }
    }
    if(c==d){
        cout<<s<<"\n";
        continue;
    }
    else if(c>d){
        int i=0;
        while(c!=d&&i<=s.size()-1){
            cout<<c<<" "<<d<<"\n";
            if(i==s.size()-1){
               // cout<<0;
                if(s[i]=='b'){
                  s[i]='a';
                  c--;
                }
                i++;
                continue;
            } 
            if(s[i]=='a'&&s[i+1]=='b'){
                if(i==0){
                     s[i]='b';
                    c--;
                }
                else if(s[i-1]!='a'){
                    s[i]='b';
                    c--;
                }else{
                    s[i+1]='a';
                    c--;
                }
            }
            i++;
        }
    }
    else{
        int i=0;
        while(c!=d&&i<=s.size()-1){
             if(i==s.size()-1){
                if(s[i]=='a'){
                  s[i]='b';
                  d--;
                }
                i++;
                continue;
            } 
            if(s[i]=='b'&&s[i+1]=='a'){
                if(i==0){
                    s[i]='a';
                    d--;
                }
                else if(s[i-1]!='b'){
                    s[i]='a';
                    d--;
                    continue;
                }else{
                    s[i+1]='b';
                    d--;
                }
            }
            i++;
        }
    }
    cout<<s<<"\n";
}

return 0;
}