#include<iostream>

using namespace std;
//typedef is just another alias of the data type.
typedef struct employee
{
    int  eId; //4
    char favChar; //1
    float salary; //4 Total 9 bytes
} ep;

 union money
{
    int  rice; //4
    char car; //1
    float pounds; //4 //Allocates only 4 bytes, because only 1 can be used at a time because of shared memory.
};



int main() {
    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast<<endl; //  Prints 0
    cout<<lunch<<endl; //Prints 1
    cout<<dinner<<endl; // Prints 2
    ep harsh;
    union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 45000;
    // cout<<m1.rice<<endl; //Prints Garbage Value
    // harsh.eId  = 1;
    // harsh.favChar = 'c';
    // harsh.salary = 1200000;
    // cout<<"The Value of harsh salary is "<<harsh.salary<<endl;
    // cout<<"The Value of harsh id is "<<harsh.eId<<endl;
    // cout<<"The Value of harsh facvhar is "<<harsh.favChar<<endl;
    return 0;
}