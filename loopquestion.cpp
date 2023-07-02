#include <iostream>
using namespace std;
int main() {
  //  factorial of a number 
  int n ;
  cin >> n;
  int f = 1;
  for(int i = 1;i<=n;i++){
    f=f*i;
  }
  cout<<f;

}
