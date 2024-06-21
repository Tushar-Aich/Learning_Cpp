#include<iostream>
using namespace std;

int main(){

    char vowels[5];
    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }

    for(int i=0;i<5;i++){
        cout<<vowels[i]<<" ";
    }

    for(char &element:vowels){
        cin>>element;
    }

    for(char element:vowels){
        cout<<element;
    }

    return 0;
}