#include<iostream>

using namespace std;


//Call by value

int sum(int a, int b) {

    int c = a+b;
    return c;
}

//This will not  swap a  and b
int swap(int a , int b) {
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}

//This will  Swap (Call by reference)
void swapPointer(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//This will  Swap (Call by reference using C++ reference variables)
void swapReferenceVar(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int num1, num2;
    num1 = 4;
    num2 = 5;
    // cout<<"The sum of 4 & 5 is "<<sum(4,5)<<endl;
    cout<<"First Number is " << num1 << " and Second number is " << num2 <<endl; 
   // swap(num1, num2); //This will not swap
    //swapPointer(&num1, &num2); //This will  swap using pointers
    swapReferenceVar(num1, num2);
    cout<<"First Number is " << num1 << " and Second number is " << num2 <<endl; 
    return 0;
}