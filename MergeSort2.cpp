#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){
    //Taking mid
    int mid = (start + end)/2;

    //defining lengths of the array about to be made  
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //creating arrays dynamically according to their respesctive lengths
    int *newArr1 = new int[len1];
    int *newArr2 = new int[len2];

    //Defining pointers for the arrays
    int ptr1 = 0;
    int ptr2 = 0;
    int ptr3 = start;

    //Assigning values into first array from the main array
    for(int i = 0; i < len1; i++){
        newArr1[i] = arr[ptr3++];
    }

    //Assigning values into second array from the main array
    ptr3 = mid + 1;
    for(int i = 0; i < len2; i++){
        newArr2[i] = arr[ptr3++];
    }

    //Merging the arrays
    ptr3 = start;
    while(ptr1 < len1 && ptr2 < len2){
        if(newArr1[ptr1] < newArr2[ptr2]){
            arr[ptr3] = newArr1[ptr1];
            ptr3++;
            ptr1++;
        }else{
            arr[ptr3] = newArr2[ptr2];
            ptr3++;
            ptr2++;
        }
    }

    //If second array is exhaudted and their are still elements in the first array
    while(ptr1 < len1){
        arr[ptr3] = newArr1[ptr1];
        ptr3++;
        ptr1++;
    }
    
    //If first array is exhaudted and their are still elements in the second array
    while(ptr2 < len2){
        arr[ptr3] = newArr2[ptr2];
        ptr3++;
        ptr2++;
    }
}

void mergeSort(int *arr, int start, int end){
    //basecase
    if(start >= end) return;

    int mid = (start + end)/2;

    //Sorting left part
    mergeSort(arr, start, mid);

    //Sorting right part
    mergeSort(arr, mid+1, end);

    //merging the arrays
    merge(arr, start, end);
}

//Printing the sorted array
void print(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    int arr[] = {3,6,2,8,1,9,10,15,32,7,4,12};
    int size = 12;
    int start = 0;
    int end = size - 1;

    mergeSort(arr, start, end);
    print(arr, size);

    return 0;
}