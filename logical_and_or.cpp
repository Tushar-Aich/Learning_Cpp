#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        cout<<"chaaracter is vowel"<<endl;
    }
    else{
        cout<<"character is consonant"<<endl;
    }
    return 0;
}