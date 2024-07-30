#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int size, int index, vector<int> &ans, int givenSum, int initialSum){
    if(index == size){
        if(initialSum == givenSum){
            for(auto element : ans){
                cout << element << " ";
            }
            if(ans.size() == 0) cout << "NULL";
            cout << endl;
        }
        return;
    }

    //take condition
    ans.push_back(arr[index]);
    initialSum += arr[index];
    subsequence(arr, size, index+1, ans, givenSum, initialSum);
    if(ans.size() == 1) return;

    initialSum -= arr[index];
    ans.pop_back();
    subsequence(arr, size, index+1, ans, givenSum, initialSum);
    if(ans.size() == 1) return;

}

int main(){
    int arr[] = {1,2,1};
    int size = 3;
    vector<int> ans;
    int givenSum = 2;

    subsequence(arr, size, 0, ans, givenSum, 0);

    return 0;
}