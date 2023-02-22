#include <iostream>
using namespace std;

void printRowMajorOrder(int arr[][3], int m, int n) {
    cout << "Array A printing in row major order:\n";      
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << *(*(arr+i)+j) << "  ";  //cout << arr[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
}
void printColumnMajorOrder(int arr[][3], int m, int n) {
    cout << "Array A printing in column major order:\n";      
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << arr[j][i] << "  ";  //cout << *(*(arr+j)+i) << "  ";
        cout << endl;
    }
    cout << endl;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printRowMajorOrder(arr, 3, 3);
    printColumnMajorOrder(arr, 3, 3);
    
    return 0;
}
