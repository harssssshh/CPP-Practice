#include<iostream>
using namespace std;

class Base {
    protected:
        int a; // It can be inherited.
    private:
        int b;
};
/*For a protected member:
               Public Derivation     Private Derivation     Protected Derivation
Private Members :  Not Inherited       Not Inherited           Not Inherited             
Protected Members : Protected           Private                Protected
Public Members :    Public              Private                Protected

*/
class Derived : protected Base {

};
int main() {
    Base b;
    Derived d;
    cout<< d.a; // Will not work since a is protected in both  base as well as derived class.
    return 0;
}