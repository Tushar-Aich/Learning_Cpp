#include <iostream>
using namespace std;

inline int getMax(int i, int j) {
    // using ternary operator
    return (i > j) ? i : j;
}

int main(){
    int i = 5, j = 10;
    int ans;

    ans = getMax(i, j);
    cout << ans << endl;

    i += 5;
    j += 10;

    ans = getMax(i, j);
    cout << ans << endl;

    return 0;

}