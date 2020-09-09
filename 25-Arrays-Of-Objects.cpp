#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    
    public:
        void setId(void) {
            salary = 122;
            cout<<"Enter ID of employee"<<endl;
            cin>>id;
        }

        void getId(void) {
            cout<<"The Id of this employee is " << id << endl;
        }
};

int main() {
    // Employee harsh, rohan, lovish, shruti;
    // harsh.setId();
    // harsh.getId();
    Employee fb[4];
    // fb[0].setId();
    // fb[0].getId();

    for (int i = 0; i < 4; i++)
    {
        /* code */
            fb[0].setId();
            fb[0].getId();

    }
    
    return 0;
}