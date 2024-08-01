#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void merge(int *arr1, int *arr2, int size1, int size2, vector<int> &ans){
    for(int i = 0; i < size1; i++){
            ans.push_back(arr1[i]);
    }
    for(int i = 0; i < size2; i++){
        ans.push_back(arr2[i]);
    }
}

int main()
{
    int arr1[] = {2,3};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {1,4}; 
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> ans;

    merge(arr1, arr2, size1, size2, ans);
    sort(ans.begin(), ans.end());

    int index = ans.size()/2;

    double median;
    if(ans.size() % 2 == 0){
        median = (ans.at(index - 1) + ans.at(index));
        median /= 2;
    }else{
        median = ans.at(index);
    }

    cout << median << endl;

    return 0;
}