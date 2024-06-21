#include<iostream>
using namespace std;

int main(){

    int array[]={2,5,8,32,44,62};
    int size = 6;
    int find;
    cout<<"enter the value to find"<<endl;
    cin>>find;
    int ans=-1;
    for(int i=0;i<size;i++){
        if(array[i]==find){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}