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




int main(){
 fast
string s;
cin>>s;
ll c=1;
ll ans=0;
for(int i=1;i<=s.size();i++){
        if(s[i]==s[i-1])
        c++;
        else
        c=1;
        if(c==7){
            ans=1;
            break;
        }
}
        if(ans==1)
        yes;
        else
        {
            no;
        }
        


return 0;
}