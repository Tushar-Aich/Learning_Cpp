#include<iostream>
using namespace std;
int main(){

    int num1=5; //binary form=0101
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;
    
    int num2=10; //binary form=1010
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;

    return 0;
}