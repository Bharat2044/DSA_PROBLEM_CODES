#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter size of array row: ";
    cin >> row;
    cout << "Enter size of array column: ";
    cin >> col;
    
    int **arr = new int*[row];
    for (int i=0; i<row; i++)
        arr[i] = new int[col];
        
    cout << "Enter array elements:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cin >> arr[i][j];
    }
    
    cout << "Array elements are:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }
    
    for(int i=0; i<row; i++) // To delete the inner
        delete[] arr[i];
    delete[] arr; // To delete the outer array
 
    return 0;
}
