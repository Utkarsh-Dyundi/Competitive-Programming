#include <bits/stdc++.h>
using namespace std;

struct Node{
    int par=-1;
    int rank=0;
};

int findPar(vector<Node>& adj, int i){
    if(adj[i].par==-1){
        return i;
    }
    int p=findPar(adj,adj[i].par);
    adj[i].par=p;
    return p;
}

void unionF(vector<Node>& adj, int i,int j){
    int par1=findPar(adj,i);
    int par2=findPar(adj,j);
    if(adj[par1].rank>adj[par2].rank){
            adj[par2].par=par1;
    }
    else if(adj[par1].rank>adj[par2].rank){
         adj[par2].par=par1;
         adj[par1].rank++;
    }
    else{
         adj[par1].par=par2;
    }
}

int main(){
    int n,m1,m2;
    vector<Node> a(n+5),b(n+5);
    cin>>n>>m1>>m2;
    int x,y;
    for(int i=0;i<m1;i++){
        cin>>x>>y;
        unionF(a,x,y);
    }
    for(int j=0;j<m2;j++){
        cin>>x>>y;
        unionF(b,x,y);
    }
 vector<pair<int,int>> ans;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
        int topFor1a=findPar(a,i);
          int  topFor1b=findPar(a,j);
            int topFor2a=findPar(b,i);
            int topFor2b=findPar(b,j);
            if(topFor1a!=topFor1b&&topFor2a!=topFor2b){
                ans.push_back({i,j});
                unionF(a,i,j);
                unionF(b,i,j);
            }
        }
    }

    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<"\n";
    }
}