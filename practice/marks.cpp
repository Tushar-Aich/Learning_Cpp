#include<iostream>
using namespace std;

int main(){
    float sub1, sub2, sub3, marks, percent;

    cout<<"Enter the marks for subject 1: ";
    cin>>sub1;
    cout<<endl;

    cout<<"Enter the marks for subject 2: ";
    cin>>sub2;
    cout<<endl;

    cout<<"Enter the marks for subject 3: ";
    cin>>sub3;
    cout<<endl;

    marks = sub1 + sub2 + sub3;
    cout<<"Total marks: "<<marks<<endl;

    percent = marks/300 * 100;
    cout<<"Percentage is: "<<percent<<" %"<<endl;

    return 0;

}