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

bool fp(vll a, int n,ll cd,ll l)
{
    sort(a.begin(), a.end());
    do {
    vll in=a;
    ll c,an=0;
    fo(i,0,n-2){
        fo(j,i,n-1){
            if(in[j]==i+1){
                c=j;
                break;
            }
        }
        reverse(in.begin()+i,in.begin()+c+1);
        an+=(c-i+1);
    }
    //cout<<an<<"\n";
   // printv(o);
    if(an==cd){
         cout<<"Case #"<<l<<": ";
         printv(a);
         return true;
        }


    } while (next_permutation(a.begin(), a.begin() + n));
    return false;
}

int main(){
fast
ll t;
cin>>t;
fo(l,1,t){
    ll n,cd;
    cin>>n>>cd;
    vll a;
    fo(i,1,n){
        a.pb(i);
    }
    if(!fp(a,n,cd,l)){
        cout<<"Case #"<<l<<": IMPOSSIBLE"<<"\n";
    }
}

return 0;
}