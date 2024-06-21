#include<iostream>
using namespace std;

int main(){
    float celsius, farhenheit;

    cout<<"Enter the value for celsius: ";
    cin>>celsius;
    cout<<endl;

    farhenheit = celsius * 9/5 + 32;
    cout<<"Value of farhenheit is: "<<farhenheit<<endl;

    return 0;
}