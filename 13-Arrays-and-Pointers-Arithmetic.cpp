#include<iostream>
using namespace std;
int main() {

    //Array Example

    int marks[] = {23, 44, 56, 88, 100};
    int mathMarks[2];
    mathMarks[0] = 45;
    mathMarks[1] = 47;
    mathMarks[2] = 49;
    mathMarks[3] = 42;
    // cout<<mathMarks<<endl; //This prints address of array, so by default the array without "&" prints array.
    
    
    //Pointer arithmetic
    // address (new) = address (old) + i * sizeof(datatype)

    // cout<<"These are math marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;
    // cout<<mathMarks[4]<<endl;
    // cout<<mathMarks[5]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The Value of marks "<< i <<" is "<<mathMarks[i]<<endl;
    // }

    //Using while loop
    
    // int i=0;
    // while (i<4)
    // {
    //     cout<<"The Value of marks "<< i <<" is "<<mathMarks[i]<<endl;
    //     i++;
    // }

    //Using Do-while loop
    // int i = 0;
    // do{
    //     cout<<"The Value of marks "<< i <<" is "<<mathMarks[i]<<endl;
    //     i++;
    // }while (i<4);



    //Pointers and arrays

    int *p = mathMarks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of mathMark[0] is "<<*p <<endl;
    cout<<"The value of mathMark[1] is "<<*(p+1) <<endl;
    cout<<"The value of mathMark[2] is "<<*(p+2) <<endl;
    cout<<"The value of mathMark[3] is "<<*(p+3) <<endl;
    
    return 0;

}