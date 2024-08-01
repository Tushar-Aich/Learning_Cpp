#include<iostream>
using namespace std;

int partition(int *arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(int *arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);

        QuickSort(arr, low, pIndex - 1);

        QuickSort(arr, pIndex + 1, high);
    }
    return;
}

int main(){
    int array[] = {3,4,7,1,9,2,6,4,0,10,16,32,28,26};
    int size = sizeof(array)/sizeof(array[0]);
    int low = 0;
    int high = size - 1;

    QuickSort(array, low, high);
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }cout << endl;

    return 0;
}