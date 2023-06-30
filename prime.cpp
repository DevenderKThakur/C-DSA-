#include <iostream>
using namespace std;
int main() {
  int n ;
  cin >> n ;
  int i = 2;
  if(i == n){
    cout<<"prime ";
  }
  while(i<n){
    if(n%i==0){
      cout<< " not a prime ";
      break;
    }else{
      cout<< "a prime ";
      break;
    }
    i=i+1;
  }
 
  return 0;
 }
