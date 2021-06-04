#include<iostream>
using namespace std;
 void add(int num1 ,int num2)
 {
    cout<<"addition of numbers \t"<<num1+num2;
 }

 void add(int num1 , double num2)
 {
    cout<<"addition of numbers \t"<<num1+num2;
 }

  void add(int num1 , double num2, double num3)
 {
    cout<<"addition of numbers \t"<<num1+num2+num3;
 }

 int main()
 {
     add(7,14);
     cout<<endl;
     add(7,14.5);
     cout<<endl;
     add(7,14.5,7.5);
     cout<<endl;
 }