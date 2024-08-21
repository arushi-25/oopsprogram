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
    //non-paramaterized constructor
    Teacher(){
        Dept = "Computer Science";
    }
           
};

int main(){
    Teacher t1;
    t1.name="Anjali";
    t1.subject="c++";
    t1.salary=25000;

    cout<< t1.Dept << endl;
}