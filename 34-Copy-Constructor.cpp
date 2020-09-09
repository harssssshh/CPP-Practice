#include<iostream>

using namespace std;

class Number {
  int a;
  public:
    Number(){
        a = 0;
    } // Default Constructor is needed
    Number(int num) {
        a = 45;
    }
    Number(Number &obj) {
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    } //When no copy constructor is found, Compiler supplies its own copy constructor;

    void display(){
        cout<<"The number for this object is "<< a <<endl;
    }

};
int main() {
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display(); //Output 45
    z2 = 2; //Copy constructor is not called
    Number z3 = z; //Copy constructor is invoked
    // z1  Should exactly resemble z or x or y;
    Number z1(z); //Copy constructor Invoked.
    z1.display();
    z2.display();
    z3.display();
    
    return 0;
}