#include<iostream>
using namespace std;

int main(){

    int A[3][3], B[3][3],C[3][3], r, c;

    cout << "Elements of matrices A: "; 
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            cin >> A[r][c];
        }
    }
    cout<<endl;
    
    cout<<"Elements of A: ";
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            cout << A[r][c] << " ";
        }
    }
    cout<<endl;
   
    cout << "Elements of matrices B: "; 
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            cin >> B[r][c];
        }
    }
    cout<<endl;

    cout<<"Elements of B: ";
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            cout << B[r][c] << " ";
        }
    }
    cout<<endl;
    
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            C[r][c] = A[r][c] + B[r][c];
        }
    }

    cout<<"Elements of C: ";
    for(r = 0; r < 3; r++){
        for(c = 0; c < 3; c++){
            cout << C[r][c] << " ";
        }
    }


    return 0;
}