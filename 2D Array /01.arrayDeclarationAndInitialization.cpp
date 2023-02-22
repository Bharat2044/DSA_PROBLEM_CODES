#include <iostream>
using namespace std;

int main() {
    int A[3][3];                                         // Array Declaration
    int B[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};    // Array Declaration + Initialization
    int C[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};          // Array Declaration + Initialization
    int D[3][3] = {0};                                  // Array Declaration + Initialization
    int E[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};           // Array Declaration + Initialization
    int F[][3] = {0};                                   // Array Declaration + Initialization
    
    cout <<"Size of array A: " << sizeof(A) << endl;  //36
    cout <<"Size of array B: " << sizeof(B) << endl;  //36
    cout <<"Size of array C: " << sizeof(C) << endl;  //36
    cout <<"Size of array D: " << sizeof(D) << endl;  //36
    cout <<"Size of array E: " << sizeof(E) << endl;  //36
    cout <<"Size of array F: " << sizeof(F) << endl;  //12
    cout << endl;
    
    cout << "Array A:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << A[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array B:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << B[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array C:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << C[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array D:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << D[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array E:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << E[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array F:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << F[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
