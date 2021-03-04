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
ll n;
cin>>n;
ll xq;
vll a;
for(int i=0;i<n;i++){
    cin>>xq;
    a.pb(xq);
}
ll i ,j,k;
ll ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0,ans7=0,ans8=0,ans9=0,ans10=0;
for( i=0;i<239;i++){
    ll s=0;
    ll q=0;
    s+=i*a[q++];
    if(s%239==0)
    ans1++;
    if(n>1){
        for(j=0;j<239;j++){
           if(i!=j)
            s+=j*a[q++];
            if(s%239==0)
            ans2++;
     
         if(n>2){
        for(k=0;k<239;k++){
            if(j!=k)
            s+=k*a[q++];
            if(s%239==0)
        
            ans3++;
      
    //      if(n>3){
    //     for(int z=0;z<239;z++){
    //         if(k!=z)
    //         s+=z*a[q++];
    //         if(s%239==0)
    //         ans4++;
       
    //      if(n>4){
    //     for(int c=0;c<239;c++){
    //         s+=c*a[q++];
    //         if(s%239==0)
    //         ans5++;
        
    //      if(n>5){
    //     for(int v=0;v<239;v++){
    //         s+=v*a[q++];
    //         if(s%239==0)
    //         ans6++;
     
    //      if(n>6){
    //     for(int b=0;b<239;b++){
    //         s+=b*a[q++];
    //         if(s%239==0)
    //         ans7++;
        
    //      if(n>7){
    //     for(int r=0;r<239;r++){
    //         s+=r*a[q++];
    //         if(s%239==0)
    //         ans8++;
    //    if(n>8){
    //     for(int t=0;t<239;t++){
    //         s+=t*a[q++];
    //         if(s%239==0)
    //         ans9++;
        
    //      if(n>9){
    //     for(int y=0;y<239;y++){
    //         s+=y*a[q++];
    //         if(s%239==0)
    //         ans10++;
    //     }
    //      }}}}}}}
    // }
    // }
    //      }
    // }
    // }
    // }
    }
    }
      }
    }
}

cout<<ans3;
return 0;
}