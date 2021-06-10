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
    char a='a';
    ll ans=0;
    fo(i,0,25){
        ans=0;
        fo(j,0,n-1){
            if(s[j]==a){
                ans=1;
                break;
            }
        }
        if(ans==0){
            cout<<a<<"\n";
            break;
        }
        a++;
    }
    if(ans==0){
        continue;
    }
    
    for(char i='a';i<='z';i++){
      
      for(char j='a';j<='z';j++){
            ans=0;
           string t="";
           t+=i;
           t+=j;
        fo(k,0,n-2){
            if(s[k]==t[0]&&s[k+1]==t[1]){
               // cout<<k<<" "<<t<<"\n";
                ans=1;
                break;
            }

        }
        //cout<<t<<" ";
        if(ans==0){
            cout<<t<<"\n";
            break;
        }
    }
        if(ans==0){
            break;
        }
    }
       if(ans==0){
        continue;
    }


 for(char i='a';i<='z';i++){
   for(char z='a';z<='z';z++){   
      for(char j='a';j<='z';j++){
            ans=0;
           string t="";
           t+=i;
           t+=z;
           t+=j;
        fo(k,0,n-3){
            if(s[k]==t[0]&&s[k+1]==t[1]&&s[k+2]==t[2]){
               // cout<<k<<" "<<t<<"\n";
                ans=1;
                break;
            }

        }
        //cout<<t<<" ";
        if(ans==0){
            cout<<t<<"\n";
            break;
        }
    }
    if(ans==0){
            break;
        }
   }
        if(ans==0){
            break;
        }
    }
}

return 0;
}