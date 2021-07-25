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
    ll x;
    vll a;
    forin(a,x,n);
    vll b;
    forin(b,x,n);
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    int d=n-(n/4);
    int s1=0,s2=0;
    vector<int> v1,v2;
    for(int i=0;i<d;i++){
        s1+=a[i];
        v1.pb(s1);
        s2+=b[i];
        v2.pb(s2);
    }
    int y1=s1,y2=s2;
    for(int i=d;i<n;i++){
        y1+=a[i];
        v1.pb(y1);
        y2+=b[i];
        v2.pb(y2);
    }
    if(s1>=s2){
        cout<<0<<"\n";
    }
    else{
        int e=d-1;
        int u=d-1;
        int c1=0,c2=0;
        int m=n;
        while(s1<s2){
            c1+=100;
            n++;
            int f=n-(n/4);
            int h=c1/100;
            s1=c1+v1[f-h-1];
            if(f<m){
                s2=v2[f-1];
            }
            else{
                s2=y2;
            }
            //cout<<s1<<" "<<s2<<"\n";
        }
        cout<<n-m<<"\n";
    }
}

return 0;
}