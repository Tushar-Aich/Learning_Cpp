#include<iostream>
using namespace std;

void transpMat(int Mat[3][3]){
    cout << "transposed Matrix is :: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << Mat[j][i] << "  ";
        }cout << endl;
    }
}

int main(){
    int Mat[3][3];
    cout << "Enter the elements of matrix :: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> Mat[i][j];
        }
    }

    cout << "Entered matrix is :: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << Mat[i][j] << "  ";
        }cout << endl;
    }
    transpMat(Mat);

    return 0;
}