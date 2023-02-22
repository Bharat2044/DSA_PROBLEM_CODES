#include <iostream>
#include <limits.h>
using namespace std;

void printMatrix(int arr[][3], int m, int n) { 
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) 
            cout << arr[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
}

//Approach - 1  ==>  Time Complexity = O(m*n), Space Complexity = O(m*n)
/*void transpose(int arr[][3], int m, int n) {
    int temp[m][n];
    //copy arr(i,j) value in temp(j,i) array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) 
            temp[i][j] = arr[j][i];
    }
    
    //copy temp value in arr array
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) 
            arr[i][j] = temp[i][j];
    }
}*/

//Approach - 2  ==>  Time Complexity = O(m*n), Space Complexity = O(1)
void transpose(int arr[][3], int m, int n) {
    
    for(int i=0; i<m; i++) {
        for(int j=i+1; j<n; j++) 
            swap(arr[i][j], arr[j][i]);
    }
}
int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout <<"Before transpose matrix is:\n";
    printMatrix(arr, 3, 3);
    
    transpose(arr, 3, 3);
    
    cout <<"After transpose matrix is:\n";
    printMatrix(arr, 3, 3);
    
    return 0;
}
