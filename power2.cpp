#include<iostream>
using namespace std;

int power(int i){
    //basecase
    if(i==0) return 1;
    //recursive relation
    return 2 * power(i - 1);
}

int main(){
    int i;
    cout <<"Enter the value of i: ";
    cin >> i;

    int ans = power(i);
    cout <<"Answer is: " << ans << endl;

    return 0;
}