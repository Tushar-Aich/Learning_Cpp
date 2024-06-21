// finding value of 1 + x + x^2 + x^3 + ....... + x^n

#include<math.h>
#include<iostream>
using namespace std;

int main(){
    int x,n;

    cout << "Enter the value for x: ";
    cin >> x;
    cout << endl;

    cout << "Enter the value for n: ";
    cin >> n;
    cout << endl;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + pow(x, i);
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}