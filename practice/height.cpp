#include<iostream>
using namespace std;

int main() {
    double centimeter, foot, num;

    cout<<"Enter your height in centimeters: ";
    cin>>centimeter;
    cout<<endl;

    //1 foot = 12 inches and 1 inch = 2.54cm
    num = 12 * 2.54;
    cout << num; //1 foot = 30.48cm

    cout<<"Your height in foot is: " << centimeter / num << endl;

    return 0;
}