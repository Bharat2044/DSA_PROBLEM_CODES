#include <iostream>
using namespace std;

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    
    int arrSize = sizeof(arr)/sizeof(arr[0][0]);
    int rowSize = sizeof(arr)/sizeof(arr[0]);
    int colSize = sizeof(arr[0])/sizeof(arr[0][0]);
    
    cout << "Array size: " << arrSize << endl;
    cout << "Array row size: " << rowSize << endl;
    cout << "Array column size: " << colSize << endl;
    
    return 0;
}
