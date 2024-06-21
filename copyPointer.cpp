#include<iostream>
using namespace std;

int main() {
    int num = 5;
    int *p = &num;
    //copying a pointer
    int *q = p;

    cout << "p : " << p << endl;
    cout << "q : " << q << endl;
    cout << "*p : " << *p << endl;
    cout << "*q : " << *q << endl;

    return 0;
}