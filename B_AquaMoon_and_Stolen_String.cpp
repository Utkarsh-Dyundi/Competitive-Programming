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
    ll n,m;
    cin>>n>>m;
    vector<string> v;
    string s;
    fo(i,0,n-1){
        cin>>s;
        v.pb(s);
    }
    vector<string> v1;
    fo(i,0,n-2){
        cin>>s;
        v1.pb(s);
    }
    map<char,map<ll,ll>> m1,m2;
    for(auto i:v){
        fo(j,0,i.size()-1){
            m1[i[j]][j]++;
        }
    }
    for(auto i:v1){
        fo(j,0,i.size()-1){
            m2[i[j]][j]++;
        }
    }
    for(auto i:v){
        ll c=0;
        fo(j,0,i.size()-1){
            if(m1[i[j]][j]-m2[i[j]][j]==1){
                c++;
            }
        }
        if(c==i.size()){
            cout<<i<<endl;
            break;
        }
    }


}

return 0;
}