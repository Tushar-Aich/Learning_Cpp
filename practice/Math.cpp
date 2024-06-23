#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
    //basecase
    if(n <= 0) return 1;

    //recursive relation
    return n * factorial(n-1);
}

int main(){

    int n, x;
    float ans = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of x: ";
    cin >> x;

    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            ans += pow(x, i+1)/factorial(i+1);
            cout << ans << endl;
        }else{
            ans -= pow(x, i+1)/factorial(i+1);
            cout << ans << endl;
        }
    }
    cout << endl << endl;
    cout << ans << endl;

    return 0;
}