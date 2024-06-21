#include <iostream>
using namespace std;

// #define PI 3.14 object macro

// function macros
#define FIND_MINIMUM(array, size)  \
    int min_value = array[0];      \
    for (int i = 0; i < size; i++) \
    {                              \
        if (array[i] < min_value)  \
            min_value = array[i];  \
    }                              \
    cout << min_value; \

int main()
{
    int array[] = {6, 2, 5, 1, 9};
    int size = sizeof(array) / sizeof(array[0]);
    FIND_MINIMUM(array, size);

    return 0;
}