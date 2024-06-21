#include<iostream>
using namespace std;

int main(){
    int X[3][3], Y[3][3], Z[3][3];

    cout << "Values for array X" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> X[i][j];
        }
    }
    
    cout << "Values for array Y" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> Y[i][j];
        }
    }

    // adding the arrays
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(X[i][j] == Y[i][j]){
                Z[i][j] = X[i][j] + Y[i][j];
            }
        }
    }

    cout << "Values after adding the two arrays are: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << Z[i][j] << " ";
        }
    }

    return 0;
}