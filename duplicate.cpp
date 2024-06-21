#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"size of the array is "<<size<<endl;

    cout<<"the duplicate number is : ";
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){
            if(array[i]==array[j]){
                cout<<array[i]<<" ";
            }
        }
    }
    return 0;
}
   