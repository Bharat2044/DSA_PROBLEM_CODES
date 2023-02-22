#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter size of array row: ";
    cin >> row;
    cout << "Enter size of array column: ";
    cin >> col;
    
    int arr[row][col];
    cout << "Enter array elements:\n";        //Time Complexity = O(row*col)
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cin >> *(*(arr+i)+j);   //cin >> brr[i][j];
    }
    cout << endl;
    
    //printing array elements
    cout << "Array elements are:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cout << arr[i][j] << "  ";  //cout << *(*(brr+i)+j) << "  ";
        cout << endl;
    }

    return 0;
}
