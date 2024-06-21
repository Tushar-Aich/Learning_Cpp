#include<iostream>
using namespace std;

int main() {

    //int arrays
    // int arr[10] = {2,5,6};

    // For address of first block
    /*
    cout << "Address of 1st memory block is: " << arr <<endl;

    //using and & operator
    cout << "Address of 1st memory block is: " << &arr[0] <<endl;

    //using * operator
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr + 2) << endl;
    // above and below codes are same 
    cout << "8th " << *(2 + arr) << endl;
    */

    // Character arrays
    cout << "Using character arrays " << endl;
    char ch[6] = "abcde";
    int arr[10] = {1,2,3,4,5};

    cout << arr << endl; // gives address of the 1st element of array ---> 0x61fee0
    cout << ch << endl;  // gives content inside that array ---> abcde

    char *c = &ch[0];
    //prints entire string
    cout << c << endl;

    return 0;
}