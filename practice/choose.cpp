#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num, radius;
    float area, perimeter;
    cout << "Enter the radius for a circle: ";
    cin >> radius;
    cout << endl;

    cout << "Choose a number between 1 and 2: ";
    cin >> num;
    cout << endl;

    if (num == 1) {
        area = 3.14 * pow(radius, 2); //pi = 3.14
        cout << "Area of the circle is: " << area << endl;
    }else if (num == 2) {
        perimeter = 2 * 3.14 * radius; //pi = 3.14
        cout << "Perimeter of the circle is: " << perimeter << endl;
    }else {
        cout << "Choose a number between 1 and 2" << endl;
    }

    return 0;
}
