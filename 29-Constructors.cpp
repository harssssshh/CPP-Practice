#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //Creating a constructor
    //Constructor is a special member functions with the same name as of the class.
    // It is automatically invoked whenever an object is created.
    // It is used to initalize the objects of its class.

    Complex(void); //Construction Declaration

    void printNumber()
    {
        cout << "The numbers are " << a << " and " << b << endl;
    }
};

Complex :: Complex(void) // This is a default constructor as it takes no parameters.

{
    a = 10;
    b = 0;
 //   cout<<"Hello World"<<endl; //This will print as well

}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}


/* Properties of Constructors
1. It should be declared in the public section of class.
2. They are automatically invoked whenver the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguements.
5. We cannot refer to their address.

*/