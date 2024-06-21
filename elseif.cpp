#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter the age of the person"<<endl;
    cin>>age;

    if(age<=18){
        cout<<"teenager"<<endl;
    }
    else if(age<=50){
        cout<<"adult"<<endl;
    }
    else{
        cout<<"senor citizen"<<endl;
    }
    
    return 0;
}