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
    int W,H;
    cin>>W>>H;
    int x1,y1,x2,y2,w,h;
    cin>>x1>>y1>>x2>>y2>>w>>h;
    vll ans(4,-1);
    if(h<=y1){
        ans[0]=0;
    }
    else{
        ll d=h-y1;
        if(H-y2>=d){
            ans[0]=d;
        }
    }
 
    if(w<=x1){
        ans[1]=0;
    }
    else{
        ll d=w-x1;
        if(W-x2>=d){
           ans[1]=d;
        }
    }
 
    if(h<=H-y2){
        ans[2]=0;
    }
    else{
        ll d=(H-y2)-h;
        if(y1>=d){
            ans[2]=d;
        }
    }
    if(w<=W-x2){
        ans[3]=0;
    }
    else{
        ll d=(W-x2)-w;
        if(W-x2>=d){
            ans[3]=d;
        }
    }
    double an=INT_MAX;
    for(auto i:ans){
        if(i>=0){
            double e=double(i);
            if(e<an){
                an=e;
            }
        }
    }
    if(an==INT_MAX){
        an=-1;
    }
    cout<<setprecision(12)<<double(an)<<"\n";
    
}
 
return 0;
}