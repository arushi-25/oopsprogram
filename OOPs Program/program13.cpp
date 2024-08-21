#include<iostream>
#include<string>

using namespace std;
//COMPILE TIME POLYMORPHISM (function overriding)
class Parent{
public:
   void getInfo(){
    cout<< "Parent class\n";
   }    
};

class Child : public Parent{
public:
   void getInfo(){
    cout<< "chid class\n";
   }    
};
int main(){
   Child c1;
   c1.getInfo();//overrides parent class
   Parent p1;
   p1.getInfo(); //overrrides child class
}