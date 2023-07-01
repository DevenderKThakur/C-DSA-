#include <iostream>
using namespace std;

void convertMoney(float moneyRupees){
  cin >>moneyRupees ;
  float  moneyDollar = moneyRupees*0.012;
  cout<<moneyDollar;
}

void areaTriange(int  base , int height){
  int area = (base*height)/2;
  cout<<area;
}

void rectangle(int length , int breadth ){
  int area = length * breadth ;
  cout<< area;
}

int main() {
  
  cout<<"Nameste Duniya "<<endl;

  // Input currency in rupees and output in USD
  // convertMoney(moneyRupees);

  // Area Of Triangle
  // int base , height ;
  // cin >> base >> height;
  // areaTriange( base,  height);

  // Area Of Rectangle Program
  //  int length  , breadth ;
  // cin >> length >> breadth;
  // rectangle( length, breadth);
}
