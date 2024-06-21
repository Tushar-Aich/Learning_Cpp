#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    int ans = factorial(n);

    cout << "The answer is: " << ans << endl;

    return 0;
}