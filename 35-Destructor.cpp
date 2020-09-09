#include<iostream>
using namespace std;


// Destructors never takes an arguement not does it return any value.
int count = 0;

class Num{
    public:
        Num() {
            count++;
            cout<<"This is the time when constructor is called for object numbeer" << count << endl;
        }

        ~Num() { //Destructor is initialized with ~ and same class name
        cout<< "This is the time when my destructor is called for object number" <<count << endl;
        count--;

        }
};
int main() {
    cout<<"We are in the main function"<< endl;
    cout<<"Creating first object n1" << endl;
    Num n1;
    {   cout<<"Entering this block" <<endl;
        cout<<"Creating two more objects" <<endl;
        Num n2, n3;
        cout<<"Exiting this block" <<endl;
    } // block on exiting destructor is called
    cout << "Back to main"<<endl;
 return 0;
}