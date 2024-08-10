#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,3,2,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 1;

    //Precomputation
    int hash[14] = {0};
    for(int i = 0; i < size; i++){
        hash[arr[i]] += 1;
    }

    cout << hash[target] << endl;
    return 0;
}