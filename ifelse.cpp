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
  char ch ;
  cin>>ch;
  if(ch>='A' && ch<='Z'){
    cout<<"upercase";
  }
  else if (ch>='a' && ch<='z'){
    cout<<"lowercase";
  }else{
    cout<<"number ";
  } 

  return 0;
 }
