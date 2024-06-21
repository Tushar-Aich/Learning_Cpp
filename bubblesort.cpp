#include<iostream>
using namespace std;

int main(){
    int array[]={10,1,7,6,14,9};
    int size = sizeof(array)/sizeof(array[0]);

   
    for(int i = 1; i < size ; i++){
        //for number of rounds
        bool swapped = false;
        for(int j = 0; j < size - i; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
                swapped = true;
            }
        }
        if( swapped == false){
            //array already sorted
            break;
        }
    }
    cout<<"after sorting the required array is = ";
    for(int i = 0;i <= size - 1; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}