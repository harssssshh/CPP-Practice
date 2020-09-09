#include<iostream>

using namespace std;

class Simple {
    int data;
    int data2;
    int data3;
    public:
        Simple(int a, int  b = 9, int c =8) {
            data = a;
            data2 =  b;
            data3 = c;
        }

        void printData();
};

void Simple :: printData() {

    cout <<"The Value of data is " <<data << " and " <<data2 <<" and " <<data3 <<endl;

}
int main() {
    Simple s1(1);
    s1.printData();
    return 0;
}