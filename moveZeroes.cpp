#include<iostream>
using namespace std;

int main(){
    int array[8] = {0,1,7,0,5,0,0,2};

    
    for(int j = 0; j<8; j++){
        int i = 0;
        if(array[j] != 0){
            swap(array[j], array[i]);
            i++;
        }
        cout<<array[i]<<" ";
    }
}