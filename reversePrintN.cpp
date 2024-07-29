#include<iostream>
using namespace std;

void reversePrint(int count, int n){
    if(count >= n) return;
    count++;
    reversePrint(count, n);
    cout << count <<" ";
}

int main(){
    int count = 0;
    int n = 4;

    cout << "The count is :: ";
    reversePrint(count, n);

    return 0;
}