#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};

    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

    int i=0;
    while(i<size){
        cout<<array[i]<<endl;
        i++;
    }

    return 0;
}