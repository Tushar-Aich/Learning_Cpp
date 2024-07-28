#include <iostream>
#include <Array>
using namespace std;

void merge(int arr1[], int arr2[], int arr3[], int len1, int len2){
    int ptr1 = 0;
    int ptr2 = 0;
    int ptr3 = 0;

    while(ptr1 < len1 && ptr2 < len2){
        if(arr1[ptr1] < arr2[ptr2]){
            arr3[ptr3] = arr1[ptr1];
            ptr1++;
            ptr3++;
        }else{
            arr3[ptr3] = arr2[ptr2];
            ptr2++;
            ptr3++;
        }
    }

    while(ptr1 < len1){
        arr3[ptr3] = arr1[ptr1];
        ptr1++;
        ptr3++;
    }
    
    while(ptr2 < len2){
        arr3[ptr3] = arr2[ptr2];
        ptr2++;
        ptr3++;
    }
}

void print(int arr3[], int len3){
    for(int i = 0; i < len3; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
}

void sort(int arr3[], int len3){
    for(int i = 0; i < len3; i++){
        for(int j = i + 1; j < len3; j++){
            if(arr3[j] < arr3[i]){
                swap(arr3[i], arr3[j]);
            }
        }
    }
}

int main () {
    int arr1[] = {0,5,2,4,8};
    int m = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {1,3,6,7,9};
    int n = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[10];

    merge(arr1, arr2, arr3, m, n);
    sort(arr3, 10);
    print(arr3, 10);

    return 0;
}