#include<iostream>

using namespace std;

//This will work as well because it will typecast the int to float on call based  on arguements provided.
int sum(float a, int b, int c){
    cout<<"Using functions with 3 arguements "<<endl;
    return a + b + c;

}

int sum(int a, int b){
    cout<<"Using functions with 2 arguements "<<endl;
    return a + b ; 
}
//Calculate the volume of cyliner
int volume(double r, int  h){
    return(3.14 * r * r * h);
}

//Calculate the volume of a cube

int volume(int a) {
    return a * a  * a;
}
//Rectangular box
int volume(int l, int b, int h){
 return (l*b*h);

}
int main() {
    cout<<"Sum of 3 and 6 is " <<sum(3,6)<<endl;
    cout<<"Sum of 3 and 6 and 7 is " <<sum(3,6,7)<<endl;
    cout<<"Volume of cuboid is 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"Volume of cyliner is 8, 7 is "<<volume(8,7)<<endl;
    cout<<"Volume of rectangle is 8 is "<<volume(8)<<endl;    
    return 0;
}