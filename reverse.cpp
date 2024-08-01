#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int x;
    cout<<"enter the value for x :: ";
    cin>>x;

    long reverse = 0;
    while(x != 0){
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    cout << reverse;
    return 0;
}