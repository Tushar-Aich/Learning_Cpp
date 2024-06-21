#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value for n"<<endl;
    cin>>n;
    int sum=1;
    int num;
    cout<<"enter the value for num"<<endl;
    cin>>num;

    do{
       
        sum+=num;
        n--;
    }while(n>0);

    cout<<sum<<endl;
    
    return 0;
}