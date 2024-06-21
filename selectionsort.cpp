#include<iostream>
using namespace std;

int main(){
    int array[]={64,25,12,22,11};
    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        int minindex = i;
        for(int j=i+1;j<size;j++){
            if(array[minindex]>array[j]){
                minindex = j;
            }
        }
        swap(array[minindex],array[i]);
    }
    cout<<"after swapping the array, the array is = ";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}