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
    vector<string> v;
    ll c1=0,c2=0,c3=0;
    fo(i,0,2){
        string s;
        cin>>s;
        fo(i,0,2){
            if(s[i]=='X'){
                c1++;
            }
            else if(s[i]=='O')
            c2++;
            else
            {
                c3++;
            } 
        }
        v.pb(s);
    }
    if(c2>c1){
        cout<<3<<"\n";
        continue;
    }
     if(abs(c1-c2)>1){
        cout<<3<<"\n";
        continue;
    }
    //cout<<c1<<" "<<c2<<"\n";
   
    ll x=0,o=0;

    fo(i,0,2){
        if(v[i][0]==v[i][1]&&v[i][1]==v[i][2]){
            if(v[i][0]=='X')
            x++;
            else if(v[i][0]=='O')
            o++;
        }
        if(v[0][i]==v[1][i]&&v[1][i]==v[2][i]){
            if(v[0][i]=='X')
            x++;
            else if(v[0][i]=='O')
            o++;
        }
    }
    if(v[0][0]==v[1][1]&&v[1][1]==v[2][2]){
        if(v[0][0]=='X')
            x++;
            else if(v[0][0]=='O')
            o++;
    }
    if(v[0][2]==v[1][1]&&v[1][1]==v[2][0]){
        if(v[0][2]=='X')
            x++;
            else if(v[0][2]=='O')
            o++;
    }
    //cout<<x<<" "<<o<<"\n";
    if(x==0&&o==0){
        if(c3==0)
        cout<<1<<"\n";
        else
        {
            cout<<2<<"\n";
        }
        continue;
    }
    if(x>0&&o>0){
        cout<<3<<"\n";
        continue;
    }
    // if(x>1||o>1){
    //     cout<<3<<"\n";
    //     continue;
    // }
    if(x>0){
      if(c1!=c2+1){
        cout<<3<<"\n";
        continue;
        }
        else{
        cout<<1<<"\n";
        continue;
    }
    }
    if(o>0){
        if(c1!=c2){
        cout<<3<<"\n";
        continue;
        }
        else{
        cout<<1<<"\n";
        continue;
    }
    }
    if(c1+c2==9){
        cout<<1<<"\n";
        continue;
    }
    else{
        cout<<2<<"\n";
    }
}
return 0;
}