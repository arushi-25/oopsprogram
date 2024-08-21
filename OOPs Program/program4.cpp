#include <iostream>
#include <string>

using namespace std;

class Teacher{
public:
    string name;
    string Dept;
    string subject;
    double salary;

    void changeDept(string newDept){
        Dept=newDept;
    }
    Teacher(){
        Dept="Computer Science";
    }
    //paramatrized constructor
    Teacher(string n,string d,string s,double sal){
        name =n;
        Dept= d;
        subject= s;
        salary= sal;
    }
    void printInfo(){
        cout << "name: " << name <<endl;
        cout << "subject: " << subject <<endl;
    }
           
};

int main(){
    Teacher t1("Anjali","Computer Science","c++",25000);
    t1.printInfo();
}
