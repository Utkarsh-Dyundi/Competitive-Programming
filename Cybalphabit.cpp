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

ll last(ll a){
    ll b=a&(a-1);
    ll ans=log2(a^b);
    return ans;
}

int main(){
 fast
tc{
    ll n,k;
    cin>>n>>k;
    if (k<n)
    {
        cout<<"-1"<<"\n";
    }
    else if(n==1&&k%2!=0){
        cout<<"-1"<<"\n";
    }
    else{
       ll u=k;
       ll v,c=0;
       ll ans[100]={};
      while(true){
         
          if(u==0){
              break;
          }
           c++;
          v=last(u);
          ans[v]=ans[v]+1;
          u=u&(u-1);
      }
      if(n<c){
          cout<<"-1"<<"\n";
      }
      else{
          ll check=0;
            ll f=n-c;
            if(f!=0){
            for(ll i=31;i>=0;i--){
                if(f==0){
                    break;
                }
                  if(i==0){
                      cout<<-1<<"\n";
                      check=1;
                      break;
                  }
                  while(ans[i]>=1&&f>=1){
                      ans[i]=ans[i]-1;
                      ans[i-1]=ans[i-1]+2;
                      f--;
                  }
            }
            }
            if(check==0){
                char ch;
                fo(i,0,31){
                    fo(k,0,ans[i]-1){
                        ch=char(i+'a');
                        cout<<ch;
                    }
                }
                cout<<"\n";
            }

      }   
     }
    }


return 0;
}