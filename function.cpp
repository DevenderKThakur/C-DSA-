#include <iostream>
using namespace std;
int  product(int a , int b){
  return a*b;
}
void sumNum(int n){
  int sum = 0;
  for(int i = 0;i<n;i++){
    sum = sum + i ;
  }
  cout<<sum;
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

void showMarks(int n){
  if(n>=91 && n <=100){
    cout<<"AA";
  }else  if(n>=81 && n <=90){
    cout<<"AB";
  }else if(n>=71 && n <=80){
    cout<<"BB";
  }else if(n>=61 && n <=70){
    cout<<"BC";
  }else if(n>=51 && n <=60){
    cout<<"CD";
  }else if(n>=41 && n <=50){
    cout<<"DD";
  }else{
    cout<<"Fail";
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

//  Given the marks of N subjects, we have to print the grade of a student based on the following grade slab.
// If Percentage Marks > 90, Grade is A+
// If 70 <= Percentage Marks <= 89, Grade is A
// If 60 <= Percentage Marks <= 69, Grade is B
// If 50 <= Percentage Marks <= 59, Grade is C
// If Percentage Marks <= 40, Grade is D
  // int marks;
  // cin>>marks;
  // showMarks(marks);
  int n ;
  cin>>n;
  sumNum(n);
  return 0;
}
