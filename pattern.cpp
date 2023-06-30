#include <iostream>
using namespace std;

void pattern1(int n){
  for(int row = 1;row <= n;row++){
    for(int col = 1;col <=n;col++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern2(int n){
  for(int row = 1;row <= n;row++){
    for(int col = 1;col <=row;col++){
      cout<<"*";
    }
    cout<<endl;
  }


void pattern3(int n){
  for(int row = 1;row <= n;row++){
    for(int col = 1;col <=n-row+1;col++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void pattern4(int n ){
  for (int row = 1;row <=n ;row++){
    for(int col = 1;col<=row;col++){
      cout<<col;
    }
    cout<<endl;
  }
}
int main() {
  int n ;
  cin>>n;
  // pattern1(n);
  // pattern2(n);
  // pattern3( n);
  // pattern4(n);
  return 0;
 }
