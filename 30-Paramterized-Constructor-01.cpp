#include<iostream>

using namespace std;

class Complex{

    int a , b; //Private Members


    public :
        Complex(int, int); //Declaration

        void printNumber() {
            cout<<"Your number is " << a << " + " << b << "i" << endl;

        }

};

Complex :: Complex(int x, int y) { //This is parameterized Constructor
    a = x;
    b = y;
}

int main() {
    //Implict Call
 Complex c(4,6);
 c.printNumber();
 // Explicit Call
 Complex b = Complex(5,7);
 b.printNumber();
 return 0;
}