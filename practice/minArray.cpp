#include<iostream>
using namespace std;

int main(){

    int array[] = {4,6,9,2,0,1,1,0,8};
    int temp;
    int size = sizeof(array)/sizeof(array[0]);
    cout <<"The size of the array is: " << size << endl;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] > array[j]){
                swap(array[i],array[j]);
            }
        }
    }

    cout << "The sorted array is: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "The minimum number in the array is: " << array[0] << endl; 
    cout << "The maximum number in the array is: " << array[size - 1] << endl; 
    return 0;
}