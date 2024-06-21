#include<iostream>
using namespace std;

bool ispossible(int arr[], int students, int size, int mid){
    int studentcount = 1;
    int pagesum = 0;

    for(int i=0; i<size; i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > students || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }

    }
    return true;
}

int allocatebooks(int arr[], int students, int size){
    int start = 0;
    int sum = 0;

    for(int i=0; i<size; i++){
        sum +=arr[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<end){
        if(ispossible(arr,students,size,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int array[4]={10,20,30,40};
    int students = 2;
    cout<<"minimum number of pages allocated : ";
    cout<<allocatebooks(array,2,4)<<endl;
}
