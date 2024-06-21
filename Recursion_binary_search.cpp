#include<iostream>
using namespace std;

void print(int arr[], int start, int end){
    for(int i=start; i <= end; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int arr[], int key, int start, int end){

    //printing the array
    print(arr, start, end);
    cout << endl;

    int mid = start + (end - start)/2;
    cout << "Value of mid is: " << arr[mid] << endl;

    //basecase of element not found
    if(start > end) return false;

    //basecase of element found
    if(arr[mid] == key) return true;

    //searching in right part of array
    if(arr[mid] < key) return binarySearch(arr, key, mid + 1, end);

    //searching in left part of array
    else return binarySearch(arr, key, start, mid - 1);

}

int main(){

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;

    bool ans = binarySearch(arr, key, 0, 5);
    cout << endl;
    if(ans) cout << "Element found" << endl;
    else cout << "No element found" << endl;

    return 0;
}