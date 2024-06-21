#include<iostream>
using namespace std;

int main(){

    int sales[5][12];
    long total;

    for(int i = 0; i < 5; i++){
        total = 0;
        cout << "Enter sales for salesman" << i + 1 << endl;
        for(int j = 0; j < 12; j++){
            cout << "Month " << j + 1 <<" ";
            cin >> sales[i][j];
            total += sales[i][j];
        }
        cout<<endl;
        cout<< " Total sales for salesman" << i + 1 << " = Rs. " << total << endl;
    }

    return 0;
}