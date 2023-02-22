#include <iostream>
using namespace std;

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    
    int row, col;
    cout << "Enter size of array row: ";
    cin >> row;
    cout << "Enter size of array column: ";
    cin >> col;
    
    int brr[row][col];
    cout << "Enter array elements:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cin >> *(*(brr+i)+j);   //cin >> brr[i][j];
    }
    cout << endl;
    
    //printing array elements
    cout << "Array arr elements are:\n";
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << arr[i][j] << "  ";  //cout << *(*(arr+i)+j) << "  ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Array brr elements are:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cout << brr[i][j] << "  ";  //cout << *(*(brr+i)+j) << "  ";
        cout << endl;
    }

    return 0;
}
