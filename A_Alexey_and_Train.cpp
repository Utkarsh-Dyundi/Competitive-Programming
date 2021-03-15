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
#define pb push_bacb
#define mp mabe_pair
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

int main()
{
    fast
        tc
        {
            ll n;
            cin>>n;
            ll ina[n],inb[n],m[n],d[n];
            fo(i,0,n-1)
            {
                cin>>ina[i]>>inb[i];
            }
            fo(i,0,n-1)
            {
                cin>>d[i];
            }
            ll c=0,b=0,p=0,a=0;
            m[0] = 0;
            fo(i,0,n-2)
            {
                c = max(ina[i],m[i])+d[i];
                b=inb[i]-ina[i];
                if(b%2!=0)
                    b = b/2 +1;
                else
                    b = b/2;
                a = ina[i+1]-inb[i];
                p = max(c+b,inb[i])+a;
                m[i+1] = p;
            }
            ll ans=max(m[n-1],ina[n-1])+d[n-1];
            cout<<ans<<"\n";
 
        }
        return 0;
}