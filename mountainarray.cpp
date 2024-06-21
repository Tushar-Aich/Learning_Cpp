#include<iostream>
using namespace std;

int peak(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int peak = 0;

    while(start<=end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else if(arr[mid]>arr[mid+1]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return arr[mid];
}

int main(){
    int array[]={1,2,6,4,1};
    int size = sizeof(array)/sizeof(array[0]);

    cout<<"the size of the array is : "<<size<<endl;
    cout<<"the peak element is : "<<peak(array,size)<<endl;

    return 0;
}