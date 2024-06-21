#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter the value for n"<<endl;
    cin>>n;
    cout<<"enter the value for m"<<endl;
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}