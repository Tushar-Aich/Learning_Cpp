#include<iostream>
#include<vector>
using namespace std;

void subsequence(int index, int arr[], int size, vector <int> &ans){
    //basecase
    if(index == size){
        for (auto element : ans){
            cout << element << "   ";
        }
        if(ans.size() == 0) cout << "{ }";
        cout << endl;
        return ;
    }

    //Take condition
    ans.push_back(arr[index]);
    subsequence(index+1, arr, size, ans);

    //not take condition
    ans.pop_back();
    subsequence(index+1, arr, size, ans);
}

int main(){
    int arr[] = {3,1,2,4,5};
    int index = 0;
    int size = 5;
    vector <int> ans;
    subsequence(index, arr, size, ans);

    return 0;
}