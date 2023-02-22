#include <iostream>
using namespace std;

int matrixSum(int arr[][3], int m, int n) {     //Time Complexity = O(m*n)
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            sum += arr[i][j];
    }  
    return sum;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Matrix are:\n";      
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << *(*(arr+i)+j) << "  ";  //cout << arr[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Sum = " << matrixSum(arr, 3, 3);

    return 0;
}
