#include<iostream>
using namespace std;

bool ifpossible(int arr[], int size, int cows, int mid){
    int cowcount = 1;
    int lastpos = arr[0];

    for(int i = 0; i<size; i++){
        if(arr[i] - lastpos >= mid){
            cowcount++;
            if(cowcount == cows){
                return true;
            }
        }
    }
    return false;
}

int aggressivecows(int arr[], int size, int cows){
    int start = 0;
    int end = 5;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(ifpossible(arr, size, cows, mid)){
            ans  = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int array[5]={4,2,3,1,6};
    for(int i = 0; i<5; i++){
        for(int j = i + 1; j<5; j++){
            if(array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0; i<5; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"largest distance between two cows = "<<aggressivecows(array,5,2)<<endl;
    return 0;
}