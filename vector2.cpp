#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(1);

    cout<<v.capacity()<<endl;
    v.push_back(2);

    cout<<v.capacity()<<endl;
    v.push_back(3);

    cout<<v.capacity()<<endl;
    v.push_back(4);

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    for(auto element : v){
        cout << element << "  ";
    }cout << endl;

    vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.begin();    --> v.end() points not to last element but to memory after last element
    it++;
    cout <<"Iterator :: " << *(it) << endl;

    return 0;
}