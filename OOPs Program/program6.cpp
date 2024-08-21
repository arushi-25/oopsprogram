#include<iostream>
#include<string>

using namespace std;

class Student{
public:    
    string name;
    double* cgpaptr;

    Student(string name, double cgpa){
        this->name=name;
        cgpaptr = new double;
        *cgpaptr= cgpa;
    }
    //copy constructor
    Student(Student &obj){
        this->name=obj.name;
        this->cgpaptr= obj.cgpaptr;
    }
    void printInfo(){
        cout<< "name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaptr<<endl;
    }
};

int main(){
    Student s1("Anjali",9.3);
    s1.printInfo();
}