#include <iostream>
#include <functional>
using namespace std;
int f(int a){
return a;
}
int main() {
function g=f;
cout<<g(3)<<"\n";
  return 0;
}
