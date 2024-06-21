#include<iostream>
using namespace std;

void print (int *p){
    cout <<"Adress is: "<< p << endl;
    cout <<"Value is: "<< *p << endl;
}
void update (int *p){
    //p = p + 1;
    //cout << "Inside: " << p << endl;
    // value of the address is updated inside the function but not outside the function while
    *p = *p + 1;
}

int getSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main () {

    // int value = 5;
    // int *p = &value;

    //print(p);

    // cout << "Before update: " << p << endl;
    // update(p);  --> doesnot give updated value of address
    // cout << "After update: " << p << endl;
    
    // cout << "Before update: " << *p << endl;
    // update(p); // gives updated value but not of address
    // cout << "After update: " << *p << endl;

    int arr[5] = {1,2,3,4,5};
    cout << "Sum is: " << getSum(arr, 5) << endl;

    return 0;
}