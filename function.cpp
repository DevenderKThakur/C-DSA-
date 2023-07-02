#include <iostream>
using namespace std;
void largest(int a , int b , int c ){
  if(a>b && a>c){
    cout<<a;
  }else if(b>c && b>a){
    cout<<b;
  }else{
    cout<<c;
  }
}
int main() {
  // how to find the largest number
  int num1,num2,num3;
  cin>>num1>>num2>>num3;
  largest(
