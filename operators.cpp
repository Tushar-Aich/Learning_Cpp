#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter the value for num1=";
    cin>>num1;
    cout<<"enter the value for num2=";
    cin>>num2;
    //arithmetic operators
    cout<<"arithmetic answers"<<endl;
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl;
    //relational operators
    cout<<"relational answers"<<endl;
    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>num2)<<endl;
    cout<<(num1<num2)<<endl;
    cout<<(num1>=num2)<<endl;
    cout<<(num1<=num2)<<endl;
    //assignment operators
    cout<<"assignment answers"<<endl;
    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
    return 0;
}