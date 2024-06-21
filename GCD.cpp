#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a == 0){
        return b;
    }
   
    if(b == 0){
        return a;
    }

    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int main(){
    int a, b;
    cout << "Enter the values for a and b: ";
    cin >> a >> b;

    int ans = GCD(a, b);
    cout << "The GCD of " << a << " and " << b <<" is: " << ans;

    return 0;
}