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

bool Sums(vll arr, int n,ll s,ll k)
{

    int sum = 0; 
    for (int i = 0; i < n; i++)
        sum += arr[i];
    bool check[n+1][sum+1];

    fo(i,0,n-1)
        check[i][0] = true;
 
    fo(i,1,sum)
        check[0][i] = false;

    fo(i,1,n)
    {
        fo(j,1,sum)
        {
            check[i][j] = check[i-1][j];
 
            if (arr[i-1] <= j)
                check[i][j] |= check[i-1][j-arr[i-1]];
        }
    }
    ll d = INT_MAX;
    for (ll j=sum/2; j>=0; j--)
    { 
        if (check[n][j] == true)
        {
            d = sum-2*j;
            break;
        }
    }
    if(((sum-d)/2)>=k){
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(){
 fast
tc{
    ll n,k;
    cin>>n>>k;
    ll x;
    vll a;
    fo(i,0,n-1){
       cin>>x;
       a.pb(x);
    }
    ll ans=0;
    sort(a.begin(),a.end(),greater<int>());
    ll sum=0;
    ll m=2*k;

    vll b;
    ll c=0;
    fo(i,0,n-1){
        c++;
        sum+=a[i];
        b.pb(a[i]);
        if(sum>=m){
            if(Sums(b,b.size(),sum,k)){
               cout<<b.size()<<"\n";
               ans=1;
               break;
       }
        }
 
    }
    if(sum<m||ans==0){
        cout<<-1<<"\n";
    }
    
    }


return 0;
}