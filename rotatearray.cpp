#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapelements(int arr[], int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){

    int array[6]={1,2,3,4,5,6};
    printarray(array,6);

    swapelements(array,6);

    printarray(array,6);
    return 0;
}