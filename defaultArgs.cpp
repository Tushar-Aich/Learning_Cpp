#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0){
    for(int i = start; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    print(arr, n);

    return 0;
}