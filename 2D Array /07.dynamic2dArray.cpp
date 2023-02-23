#include <iostream>
using namespace std;

int main() {
    // Method - 1 : Using a single pointer
    int m = 3, n = 3;
    int *arr1 = new int[m*n];
    cout << "Enter array arr1 elements:\n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cin >> *(arr1+i*n+j);
    }
    cout << "Array arr1 elements are:\n";
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << *(arr1+i*n+j) << "  ";
        cout << endl;
    }
    cout << endl;
    
    // Method - 2 : Using an array of pointer
    int r = 3, c = 3;
    int **arr2 = new int*[r];
    for (int i=0; i<r; i++)
        arr2[i] = new int[c];
        
    cout << "Enter array arr2 elements:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            cin >> arr2[i][j];
    }
    cout << "Array arr2 elements are:\n";
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            cout << arr2[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    
    delete[] arr1;
    
    for(int i=0; i<m; i++) // To delete the inner
        delete[] arr2[i];
    delete[] arr2; // To delete the outer array
 
    return 0;
}
