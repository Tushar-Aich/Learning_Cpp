#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> p = {1,3};
    cout << p.first << "  " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {3, 5}};
    cout << q.first << "  " << q.second.first << "  " << q.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    for(auto element : arr){
        cout << element.first << "," << element.second << "  ";
    }cout << endl;

    return 0;
}