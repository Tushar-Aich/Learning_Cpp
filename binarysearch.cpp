#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start = 0;
    int end = size -1;

    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        //go to right wala part
        if(key>arr[mid]){
            start = mid + 1;
        }
        //go to left wala part
        else{
            end = mid - 1;
        }

        mid=start + (end - start)/2;

    }
    return -1;
}

int main(){

    int array[6]={2,4,6,8,12,18};
    int arrayb[5]={3,8,11,14,16};

    int index = binarysearch(array, 6, 12);
    cout<<"index of 12 is : "<<index<<endl;

    int index2 = binarysearch(arrayb, 5, 16); 
    cout<<"index of 16 is : "<<index2<<endl;

    return 0;
}