#include <iostream>
using namespace std;
int main() {
  //  print n number 
  // int n ;
  // cin>>n;
  // int i = 1 ;
  // while(i<=n){
  //   cout<<i<<endl;
  //   i++;
  // }

  //  print sum of n numbers 
  // int n ;
  // cin>>n;
  // int i =1, sum =0;
  // while(i<=n){
  //   sum = sum+i;
  //   i=i+1;
  // }
  // cout<<sum<<endl;

  //  wap sum of all even number 
  int n ;
  cin >> n;
  int i = 2,  sum = 0;
  while(i<=n){
    sum = sum + i;
    i=i+2;
  }
  cout<<sum<<endl;

  
  return 0;
 }
