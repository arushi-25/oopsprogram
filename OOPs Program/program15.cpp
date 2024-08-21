#include<iostream>
#include<string>

using namespace std;
//STATIC KEYWORD
void func(){
    static int x;
    cout<<"x: "<<x<<endl;
    x++;
}
int main(){
    func();
    func();
    func();
}