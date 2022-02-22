#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0);


int main(){
 fast
 int t;
 cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]='.';
        }
    }
    int i=0,j=0;
    int c=0;
    while(c!=k){
        a[i][j]='R';
        i+=2;
        j+=2;
        c++;
        if(c==k){
            break;
        }
        if(i>=n||j>=n)
        {  
            break;
        }
    }
    if(c!=k){
        cout<<-1<<"\n";
        continue;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}

return 0;
}