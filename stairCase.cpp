#include <iostream>
using namespace std;

int stairCase(int n){
    if(n < 0){
        return 0;
    }if(n == 0) return 1;

    int ans = stairCase(n-1) + stairCase(n-2);
    return ans;
}

int main(){

    int n;
    cout << "Enter the number of stairCase: ";
    cin >> n;

    int ans = stairCase(n);
    cout << ans << endl;

    return 0;
}