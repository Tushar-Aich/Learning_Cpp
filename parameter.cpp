#include<iostream>
using namespace std;

int add(int a,int b=2,int c=2){
    return(a+b+c);
}

int main(){

    cout<<add(2)<<endl;
    cout<<add(2,3)<<endl;
    cout<<add(2,3,3)<<endl;

    return 0;
}