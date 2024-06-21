#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sum(int arr[], int size){
    int sum;
    cout<<"enter the value for sum : ";
    cin>>sum;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==sum){
                cout<<"the  indexes are : "<<i<<","<<j;
                cout<<endl;
            }
        }
    }
}

int main(){
    int nums[]={3,2,4};
    int arraysize=sizeof(nums)/sizeof(nums[0]);
    cout<<"the array is : ";
    printarray(nums,arraysize);
    sum(nums,arraysize);

    return 0;
}