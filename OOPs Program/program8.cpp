#include<iostream>
#include<string>

using namespace std;

class Person{
public:
    string name;
    int age;    

    Person(){
        cout<< "Hi, I am constructor\n";
    }
};
//INHERITANCE
class Student : public Person{
public:
    int rollno;

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;

    }    
};
int main(){
    Student s1;
    s1.name="Anjali";
    s1.age=20;
    s1.rollno=32;
    s1.getInfo();
}    