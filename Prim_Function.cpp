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

const int M=31623;
const int N=1e6+10;
int num[N],idx,ans=0;
int p[N];
bool vis[N];
int prime[N];
void init()
{
  vis[0]=vis[1]=true;
  for(int i=2;i<=M;i++)
  {
    if(!vis[i])
    {
      prime[idx++]=i;
      for(int j=2;i*j<=M;j++)
        vis[i*j]=true;
    }
  }
}
int main()
{
  init();
  tc{
  int l,r;
  scanf("%d %d",&l,&r);
  for(int i=l;i<=r;i++) p[i-l]=i;    
  if(r<=M)    
  {
    for(int i=0;i<idx;i++)
    {
      for(int j=l;j<=r;j++)
      {
        int t=j;
        while(t%prime[i]==0) num[j]++,t/=prime[i]; 
      }
    }
    for(int i=l;i<=r;i++) if(!vis[num[i]]) ans++;
  }
  else
  {
    for(int i=0;i<idx;i++)
      for(int j=(l+prime[i]-1)/prime[i]*prime[i];j<=r;j+=prime[i]) 
      {                                                             
                                                                    
        while(p[j-l]%prime[i]==0) num[j-l]++,p[j-l]/=prime[i];
      }
      for(int i=l;i<=r;i++) if(p[i-l]>1) num[i-l]++;    
      for(int i=l;i<=r;i++) if(!vis[num[i-l]]) ans++;
  }
  printf("%d\n",ans);
  }
  return 0;
}


