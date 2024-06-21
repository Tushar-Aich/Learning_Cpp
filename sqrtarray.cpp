#include<iostream>
using namespace std;

int binarysearch(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = start + ( end - start )/2;
    int ans = -1;

    while(start<end){
        if((mid*mid) == end){
            ans = mid;
        }
        else if((mid*mid) < end){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ( end - start )/2;
    }
    return ans;

}

int main(){

    int array[36]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"size of the array is : "<<size<<endl;


    int sqrt;
    sqrt = binarysearch(array,36);
    cout<<"SQRT of the number is : "<<sqrt<<endl;

    return 0;
}