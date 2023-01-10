#include<iostream>
using namespace std;

int main() {
    int A[5];                               //Array Declaration
    int B[5] = {1, 2, 3, 4, 5};             //Array Declaration + Initialization
    int C[5] = {2, 4};                      //Array Declaration + Initialization
    int D[5] = {0};                         //Array Declaration + Initialization
    int E[] = {2, 4, 6, 8, 10};             //Array Declaration + Initialization
    
    for(int i=0; i<5; i++)
        cout << A[i] << "   ";
    cout<<endl;
    for(int i=0; i<5; i++)
        cout << B[i] << "   ";
    cout<<endl;
    for(int i=0; i<5; i++)
        cout << C[i] << "   ";
    cout<<endl;
    for(int i=0; i<5; i++)
        cout << D[i] << "   ";
    cout<<endl;
    for(int i=0; i<5; i++)
        cout << E[i] << "   ";
    cout<<endl;
    
    return 0;
}
