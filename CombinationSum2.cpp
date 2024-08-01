#include <iostream>
#include <vector>
using namespace std;

void Combination(int *arr, int size, int index, int target, vector<vector<int>> &ans, vector<int> &combos)
{
    if (index == size)
    {
        if (target == 0)
        {
            ans.push_back(combos);
        }
        return;
    }

    if (arr[index] <= target)
    {
        combos.push_back(arr[index]);
        Combination(arr, size, index + 1, target - arr[index], ans, combos);
        combos.pop_back();
    }
    Combination(arr, size, index + 1, target, ans, combos);
}

int main()
{

    int arr[] = {1, 1, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int target = 4;
    vector<vector<int>> ans;
    vector<int> combos;

    Combination(arr, size, index, target, ans, combos);

    for (auto combination : ans)
    {
        for (auto all : combination)
        {
            cout << all << "  ";
        }
        cout << endl;
    }

    return 0;
}