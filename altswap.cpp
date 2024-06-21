#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void altswap(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(arr[i+1]<=arr[size]){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int array[6]={1,2,3,4,5,6};
    cout<<"before swapping : ";
    printarray(array,6);

    altswap(array,6);
    cout<<"after swapping : ";
    printarray(array,6);

    return 0;
}