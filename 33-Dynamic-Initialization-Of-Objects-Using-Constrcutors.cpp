#include<iostream>
using namespace std;


class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit() {} //Empty Constructor because compiler can't decide which constructor to invoke because the values of objects is not initialized, but constructors are meant to auomatically invoke at the time of object creation.
        BankDeposit(int p, int y, float r); // r can be value like 0.04
        BankDeposit(int p, int y, int r); // r can be value like 14 in %
        void show();
};


BankDeposit :: BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        /* code */
        returnValue = returnValue * (1+r);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        /* code */
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show(){
    cout<<"Principal amount was "<<principal<<endl<<"Return Value after " <<years << " year's is "<<returnValue <<endl;
}

int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int  R;

     cout<<"Enter the value of p y and r" <<endl;
    // cin>>p>>y>>r;
    // bd1 = BankDeposit(p, y, r);
    // bd1.show();
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;

}