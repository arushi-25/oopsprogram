#include <iostream>
#include <string>

using namespace std;

class Teacher{
private:
    double salary;    
public:
    string name;
    string Dept;
    string subject;

    void changeDept(string newDept){
        Dept=newDept;
    }
    //setter method
    void setsalary(double s){
        salary=s;
    } 
    //getter method
    double getsalary(){
        return salary;
    }  
};

int main(){
    Teacher t1;
    t1.name="Anjali";
    t1.Dept="ComputerScience";
    t1.subject="c++";
    t1.setsalary(25000);

    cout<< t1.name << endl;
    cout<<t1.getsalary() << endl;
    return 0;
}        