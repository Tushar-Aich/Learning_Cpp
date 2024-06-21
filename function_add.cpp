#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}

float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}

int main(){

    int a,b,c;
    float d,e;
    cout<<"enter the value for a"<<endl;
    cin>>a;
    cout<<"enter the value for b"<<endl;
    cin>>b;
    cout<<"enter the value for c"<<endl;
    cin>>c;
    cout<<"enter the value for d"<<endl;
    cin>>d;
    cout<<"enter the value for e"<<endl;
    cin>>e;

    cout<<"the sum is = "<<add(a,b)<<endl;
    cout<<"the sum is = "<<add(a,b,c)<<endl;
    cout<<"the float sum is = "<<add(d,e)<<endl;

    return 0;
}