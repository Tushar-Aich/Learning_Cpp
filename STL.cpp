#include<iostream>
#include<array>
using namespace std;

int main(){
    array <int,6> a = {1,2,3,4,5,6};
    int size = a.size();
    cout<<size<<endl;
    cout<<a.at(2)<<endl;
    cout<<"1st element = "<<a.front()<<endl;
    cout<<"last element = "<<a.back()<<endl;
    
}