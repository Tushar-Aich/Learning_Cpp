#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value for a=";
    cin>>a;
    cout<<"enter the value for b=";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
