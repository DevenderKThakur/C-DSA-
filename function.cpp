#include <iostream>
using namespace std;
int  product(int a , int b){
  return a*b;
}
void largest(int a , int b , int c ){
  if(a>b && a>c){
    cout<<a;
  }else if(b>c && b>a){
    cout<<b;
  }else{
    cout<<c;
  }
}

void find(int a ){
  if(a%2==0)
    cout<<"Even";
  else
    cout<<"odd";
}

void primeOrNot(int n ){
  int i ;
if(n==i){
  cout<<"prime";
}
 for(i=2;i<n;i++){
   if(n%i==0){
     cout<<"not prime";
     break;
   }else{
     cout<<"prime";
     break;
   }
 }  
}
int triplet(int a , int b , int c ){
  int x = a*a;
  int y = b*b;
  int z = c*c;
  if(x == y+z || y == x+z || z ==x+y){
    return true;
  }else{
    return false ;
  }
}
int main() {
  // how to find the largest number
  // int num1,num2,num3;
  // cin>>num1>>num2>>num3;

  //even or odd
  // int num;
  // cin>>num;
  // find(num);

  // int a , b ;
  // cin>>a>>b;
  // cout<<product(a,b);

// find prime number or not 
// int n;
// cin>>n;
// primeOrNot(n);

  // Pythagorean triplet is when the sum of the square of two numbers is equal to the square of the third number.
 // int num1,num2,num3;
 // cin>>num1>>num2>>num3;
 // cout<<triplet(num1, num2, num3) ;
  return 0;
}
