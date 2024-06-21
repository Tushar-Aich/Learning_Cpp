#include<iostream>
using namespace std;

void update (int **ptr){
    // ptr = ptr + 1; // NO CHANGE
    // *ptr = *ptr + 1; // CHANGE IN ptr and the other two remains same
    **ptr = **ptr + 1; // CHANGE IN i and the other two remains same
}

int main(){

    int i = 5;
    //creating a pointer correspionding to the address of i
    int *ptr = &i;
    //creating a pointer corresponding to the address of above defined pointer || Double pointer
    int** ptr2 = &ptr;

    // cout << endl;
    // cout << "Printing ptr: " << ptr << endl;
    // cout << "Printing value of ptr: " << *ptr << endl;
    // cout << "Printing address of ptr: " << &ptr << endl;
    // cout << endl;
    
    // cout << endl;
    // cout << "Printing ptr2: " << ptr2 << endl;
    // cout << "Printing value of ptr2: " << *ptr2 << endl;
    // cout << "Printing address of ptr2: " << &ptr2 << endl;
    // cout << endl;

    cout << endl << endl;
    cout << "Before change of i: " << i << endl;
    cout << "Before change of ptr: " << ptr << endl;
    cout << "Before change of ptr2: " << ptr2 << endl;
    cout << endl << endl;
    update(ptr2);
    cout << endl << endl;
    cout << "After change of i: " << i << endl;
    cout << "After change of ptr: " << ptr << endl;
    cout << "After change of ptr2: " << ptr2 << endl;
    cout << endl << endl;

    return 0;
}