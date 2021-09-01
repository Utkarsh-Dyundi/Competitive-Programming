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

int res=0;
void check(int a[],int n, map<string, int>& m,string& ans){
    string s="";
    for(int i=0;i<n;i++){
        if(a[i]==0){
            s+='0';
        }
        else{
            s+='1';
        }
    }
    if(m[s]==0){
        ans=s;
        res=1;
        return;
    }
}
void solve(int n, int arr[], int i, map<string, int>& m, string& ans)
{
    if(res==1){
        return;
    }
    if (i == n) {
       check(arr, n,m,ans);
        return;
    }
    arr[i] = 0;
    solve(n, arr, i + 1,m,ans);
    arr[i] = 1;
    solve(n, arr, i + 1,m,ans);
}

int main(){
 fast
tc{
    ll n;
    cin>>n;
    map<string,int> m;
    
    ll x;
    fo(i,0,n-1){
        string s;
        cin>>s;
        m[s]++;
    }
    int arr[n];
    string ans;
    solve(n,arr,0,m,ans);

    cout<<ans<<"\n";
    res=0;
}

return 0;
}