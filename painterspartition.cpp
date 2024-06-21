#include<iostream>
using namespace std;

bool ispossible(int arr[], int size, int painters, int mid){
    int boards = 0;
    int painterscount = 1;

    for(int i=0; i<size; i++){
        if(boards + arr[i] <= mid){
            boards += arr[i];
        }
        else{
            painterscount++;
            if(painterscount > painters || arr[i] > mid){
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}

int partition(int arr[], int size, int painters){
    int start = 0;

    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(ispossible(arr,size,painters,mid)){
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
    int paintboards[4]={5,5,5,5};
    int painterscount = 2;
    cout<<"minimum partition of boards in painters = "<<partition(paintboards,4,painterscount)<<endl;
}