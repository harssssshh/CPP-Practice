#include<iostream>

using namespace std;


//Inline function is used to replace the function calls with actual values at compiles time. What it does is reduce the overhead of copying the variable values and returning it which costs excess time.
//Only make it inline if the function is simple.
//Dont use inline in recursion.
inline int product(int num1, int num2){
    //Not recommened to use below lines with inline functions.
    // static int c = 0; //This executes only once
    // c = c +1; // Next time this function  is run, the value of c will be retained.
    // Inline is a request not always possible.
    return num1 * num2;
}
//Default arguements must be at right  always, and compulsory arguements must be at the left side.
float moneyReceived(int currentMoney, float factor=1.04) {
    return currentMoney * factor;
}

//const specif
// int strlen(const char *p){

// }
int main() {
    //  int a, b;
    // // cout<<"Enter the value of a & b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a & b is "<<product(a,b)<<endl;
    // return 0;
    int money = 20000;
    cout<<"If you have " <<money << " in your bank account, you will receive " << moneyReceived(money)<<" rs. after 1 year."<<endl;
    cout<<"For VIP: If you have " <<money << " in your bank account, you will receive " << moneyReceived(money, 4.0)<<" rs. after 1 year."<<endl;  

}