#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   int c,p;
   cin>>c>>p;
   unordered_map<string, unordered_map<string,int>> m;
   unordered_map<string, vector<pair<string,int>>> prom;
   for(int i=0;i<c;i++){
    string s;
    int n;
    cin>>s>>n;
    while(n--){
        string t;
        int x;
        cin>>t>>x;
        m[s][t]=x;
    }
   }
    unordered_map<string,vector<int>> pro;
    for(int j=0;j<p;j++){
        string s;
        cin>>s;
        int u;
        for(int k=0;k<=3;k++){
            int b;
            cin>>b;
            u=b;
            pro[s].push_back(b);
        }
         //cout<<u<<" ";
        for(int k=0;k<u;k++){
            string t;
            int x;
            cin>>t>>x;
            prom[s].push_back({t,x});
        }
    }
    // cout<<prom.size()<<" ";
    int ans=0;
    unordered_map<string, vector<pair<string,string>>> res;
    vector<string> ansstr;
    for(auto i:prom){
        //cout<<i.first<<"\n";
       // cout<<m["ClementE"]["Accessibility-js"]<<" ";
            int c=0;
            unordered_map<string,int> done;
        for(auto j:i.second){
            for(auto k:m){
                    int d=0;
                for(auto g:k.second){
                    if(g.first==j.first&&g.second>=j.second&&done[k.first]==0){
                        //cout<<i.first<<" "<<k.first<<" "<<j.first<<" "<<j.second<<" "<<g.second<<"\n";
                        c++;
                        if(m[k.first][j.first]==j.second)
                        m[k.first][j.first]+=1;
                        res[i.first].push_back({k.first,j.first});
                        done[k.first]=1;
                        d=1;
                        break;
                    }
                }
                if(d==1){
                    break;
                }
            }
        }
        //cout<<c<<" ";
        if(c==i.second.size()){
            //cout<<i.first<<" ";
            ans++;
            ansstr.push_back(i.first);
        }
        else{
            for(auto g:res[i.first]){
                m[g.first][g.second]-=1;
            }
        }
    }
cout<<ans<<"\n";

for(auto i:ansstr){
    cout<<i<<"\n";
    for(auto i:res[i]){
        cout<<i.first<<" ";
    }
    cout<<"\n";
}
   return 0;
}
