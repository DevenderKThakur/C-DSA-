#include <iostream>
using namespace std;
int main() {

                                          // to find that input is even or odd 
  // int x ;
  // cout<<"enter the value ";
  // cin>>x;
  // if(x%2==0){
  //   cout<<"even";
  // }else{
  //   cout<<"odd";
  // }
  
                                            // to find that the number is +ve ,-ve ,==0
  // int x ;
  // cout<<"enter the value ";
  // cin>>x;
  // if(x>0){
  //   cout<<"the number is +ve";
  // }else if (x<0){
  //   cout<<" the numebr is -ve ";
  // }else{
  //   cout<< "the number is 0";
  // }

                                        // to check weather the input given is uppercase , lowercase , number 
  // char ch ;
  // cin>>ch;
  // if(ch>='A' && ch<='Z'){
  //   cout<<"upercase";
  // }
  // else if (ch>='a' && ch<='z'){
  //   cout<<"lowercase";
  // }else{
  //   cout<<"number ";
  // } 

  // Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)
  int a , b;
  int  opt ;
  int result ;
  cin >>a>>b;
  cin >> opt ;
    if(opt == 1){
      result = a+b;
    }
  else if (opt == 2){
    result = a-b;
  }
  else if (opt == 3){
    result = a*b;
  }
  else {
    result = a/b;
  }
  cout<<result;

  return 0;
 }
