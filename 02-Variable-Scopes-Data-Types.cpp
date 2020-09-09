# include<iostream>

using namespace std;
int global = 6;
void sum(){
    int a; 
    cout<< global; // Global Precedence
    }

int main(){
    int global=9; // Local Precedence
    global=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c ='d';
    bool is_true = false;
    sum();
    cout<<global<< is_true;
    cout<<"\nThe value of pi is: "<<pi;
    cout<<"\nThe value of c is: "<<c<<endl;
    return 0;
}