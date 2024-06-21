#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"enter the value for a"<<endl;
    cin>>a;
    cout<<"enter the value for b"<<endl;
    cin>>b;


    int result=1;
    for(int i=1;i<=b;i++){

        result*=a;
    }
    cout<<result;
    return 0;
}