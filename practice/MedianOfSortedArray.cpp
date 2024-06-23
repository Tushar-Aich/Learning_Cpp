#include<iostream>
#include<array>
using namespace std;

void merge(int *arr1, int *arr2, int *arr3, int n1, int n2){
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    while(index1 < n1 && index2 < n2){
        if(arr1[index1] < arr2[index2]) arr3[index3++] = arr1[index1++];
        else arr3[index3++] = arr2[index2++];
    }
    while(index2 < n2) arr3[index3++] = arr1[index2++];
    while(index1 < n1) arr3[index3++] = arr1[index1++];
}

int main(){
    int arr1[] = {1,4,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,3,9};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[6];
    int size3 = size1 + size2;
    cout << "Size 3 is: " << size3 << endl;

    merge(arr1, arr2, arr3, size1, size2);
    for(int i = 0; i < size3; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;


    return 0;
}