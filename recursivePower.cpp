#include<iostream>
using namespace std;

int iterations(int a, int b){
    //basecase
    if(b == 0) return 1;
    if(b == 1) return a;

    //processing
    if(b % 2 == 0) return iterations(a, b/2) * iterations(a, b/2);
    if(b % 2 == 1) return a * iterations(a, b/2) * iterations(a, b/2);
}

int main(){
    int base, power;
    cout << "Enter the value for base: ";
    cin >> base;
    cout << "Enter the value for power: ";
    cin >> power;

    int answer = iterations(base, power);
    cout <<"Answer is: "<< answer << endl;

    return 0;
}