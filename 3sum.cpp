#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {-1,0,1,2,-1,-4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    int target = 0;
    vector<vector<int>> ans;

    //sorting
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[j] <= arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        if(i > 0 && arr[i] == arr[i - 1]){
            continue;
        }
        int low = i + 1;
        int high = size - 1;

        while(low < high){
            if(arr[i] + arr[low] + arr[high] == 0){
                ans.push_back({arr[i], arr[low], arr[high]});
                low++;
            }else if(arr[i] + arr[low] + arr[high] < 0){
                low++;
            }else{
                high--;
            }
        }
    }

    for(auto element : ans){
        for(auto combos : element){
            cout << combos << "  ";
        }cout << endl;
    }

    return 0;
}