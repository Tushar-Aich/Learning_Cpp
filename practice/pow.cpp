#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int num;
    cout<<"Enter the value for num: ";
    cin >> num;
    cout << endl;

    if(num % 2 != 0 && num > 0){
        cout <<"Square root of the number is: "<< sqrt(num);
    }else{
        cout <<"Number to the power of 5 is: "<< pow(num, 5);
    }

    return 0;
}