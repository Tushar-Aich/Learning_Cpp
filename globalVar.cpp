#include<iostream>
using namespace std;

//global variables
int score = 15;

void c (int& a){
    cout << score << " in a: " << a << endl;
}

void b (int& a){
    cout << score << " in b: " << a << endl;
}

int main(){
    int a = 5;
    cout << score << " in main: " << a << endl;
    c(a);
    b(a);

    return 0;

}