#include<iostream>

using namespace std;

//Function prototyping to declare that function is available so don't give compilation errors.

int sum(int a, int b);
void g();
// int sum(int a,b); -->Not acceptable
// int sum(int, int); --Acceptable

int main() {
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    g();
    // num1 and num2 are actual parameters.
    cout<<"The sum is "<< sum(num1, num2)<<endl;
    return 0; //Returns exit status 0 that is successful execution
}


int sum(int a, int b) {
    // a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;

}

void g() {
    cout<<"Hello, Good Morning"<<endl;
}