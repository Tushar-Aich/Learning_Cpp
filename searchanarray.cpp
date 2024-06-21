#include<iostream>
using namespace std;

int getpivot(int arr[], int size){

    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e){

        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;

}

int binarysearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;

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
    int array[5]={7,9,1,2,3};
    int size = sizeof(array)/sizeof(array[0]);
    int k;
    cout<<"enter the value for k : "<<endl;
    cout<<"size of array is : "<<size;
    cin>>k;
    int pivot = getpivot(array,5);
    if(k >= array[pivot] && k<=array[size-1] ){
        return binarysearch(array, pivot, size-1, k);
    }
    else{
        return binarysearch(array,0,pivot-1,k);
    }
    return 0;
}