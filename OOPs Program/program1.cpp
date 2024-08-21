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
           
};

int main(){
    Teacher t1;
    t1.name="Anjali";
    t1.Dept="ComputerScience";
    t1.subject="c++";
    t1.salary=25000;

    cout<< t1.name << endl;
}