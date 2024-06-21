#include<iostream>
using namespace std;

int main(){
    int array[] = {10,7,1,4,8,2};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=1; i<size; i++){
        //for number of rounds
        int temp = array[i];
        int j = i-1;
        for(; j>=0; j--){
            if(array[j] > temp){
                //shift
                array[j+1] = array[j];
            }
            else{
                break;
            }
        }
        array[j+1] = temp;
    }
    cout<<"the size of the array is = "<<size<<endl;
    cout<<"after sorting the required array is = ";
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}