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
    vector<vll> ans;
    int c=0;
    for(int h=0;h<=n/2;h++){
        int i=0,j=n-1;
        int k=0;
         set<ll> se;
         ll u=0;
        while(i<j){
            while(i<n&&s[i]=='0'){
                i++;
            }
            while(j>0&&s[j]=='1'){
                j--;
            }
            //cout<<i<<" "<<j<<"\n";
            if(i<j){
                u+=2;
                se.insert(i+1);
                se.insert(j+1);
                swap(s[i],s[j]);
                i++;
                j--;
                k++;
            }
            else{
                break;
            }
        }
        if(k==0){
            break;
        }
        vll p;
        p.pb(u);
        for(auto l:se){
            p.pb(l);
        }
        ans.pb(p);
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

return 0;
}