#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,2,1,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<"size of the array is "<<size<<endl;

    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^array[i];
    }
    cout<<"the unique element is : "<<ans;
    return 0;
}
   