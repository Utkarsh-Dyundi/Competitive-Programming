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
    ll n,l,r;
    cin>>n>>l>>r;
    ll x;
    map<ll,ll> m1,m2;
    fo(i,0,l-1){
        cin>>x;
        m1[x]++;
    }
    fo(i,0,r-1){
        cin>>x;
        m2[x]++;
    }
    ll d=abs(l-r);
    for(auto i:m1){
        if(m2[i.F]>0){
            ll p=min(m2[i.F],m1[i.F]);
            m2[i.F]-=p;
            m1[i.F]-=p;
        }
    }
    
    ll ans=0;
    if(r>l){
        for(auto i:m2){
            ll h=i.S/2;
            h=h*2;
            h=min(h,d);
            m2[i.F]-=h;
            d-=h;
            ans+=h/2;
            //cout<<ans<<" ";
        if(d==0){
            break;
        }
        }
    }
    else if(l>r){
        for(auto i:m1){
            ll h=i.S/2;
            h=h*2;
            h=min(h,d);
            m1[i.F]-=h;
            d-=h;
            ans+=h/2;
            //cout<<ans<<" ";
        if(d==0){
            break;
        }
        }
    }
    // cout<<t<<" "<<ans<<" ";
    // for(auto i:m2){
    //     cout<<i.F<<" "<<i.S<<"\n";
    // }
    if(d==0){
        for(auto i:m1){
            if(i.S!=0){
                ans+=i.S;
            }
        }
    }
    else{
        ll u=0,v=0;
        for(auto i:m1){
            if(i.S!=0){
                u++;
            }
        }
        for(auto i:m2){
            if(i.S!=0){
                v++;
            }
        }
        ll k=min(u,v);
        ll y=max(u,v);
        //cout<<k<<" "<<y<<"\n";
        y-=k;
        ans+=k;
        ans+=y;
    }
    cout<<ans<<"\n";
}

return 0;
}