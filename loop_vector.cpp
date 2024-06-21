#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    //for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //for each
    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    //while loop
    int j=0;
    while(j<v.size()){
        cout<<v[j++]<<" ";
    }

    return 0;
}