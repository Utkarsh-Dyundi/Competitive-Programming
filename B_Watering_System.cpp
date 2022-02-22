#include<bits/stdc++.h>
using namespace std;


int main()
{
  char a[10000];
 getline(a,10000);
  cout<<a;
  set<string> s;
int n=a.size();
    for(int i=0;i<a.size();i++){
        cout<<i<<" ";
        if(i>n-10){
            break;
        }
        if(a[i+2]=='-'&&a[i+5]=='-'){
            string v;
            v+=a[i+6];
            v+=a[i+7];
            v+=a[i+8];
            v+=a[i+9];
            s.insert(v);
            cout<<v<<" ";
        }
    }
     cout<<s.size();
}



