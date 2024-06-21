#include<iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4,5};

    cout<<"size of array = ";
    cout<<sizeof(array)<<" "<<"bytes"<<endl;
    cout<<"length of array = ";
    cout<<sizeof(array)/sizeof(array[0])<<" "<<"bytes"<<endl;

    

    return 0;
}