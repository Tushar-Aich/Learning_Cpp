#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"enter the value for n = ";
    cin>>n;

    int sum=0;
    int i=1;  //loop variable

    while(i<=n){
        sum+=i;
        i++;
    }

    cout<<sum<<endl;
    return 0;

}