#include <iostream>
using namespace std;

void rowSum(int arr[][3], int m, int n) {   //Time Complextiy = O(m*n)
    cout << "Array row sum are: ";
    for(int i=0; i<m; i++) {
        int sum = 0;
        for(int j=0; j<n; j++)
            sum += arr[i][j];
        cout << sum << "  ";
    }  
    cout << endl;
}
void colSum(int arr[][3], int m, int n) {   //Time Complextiy = O(m*n)
    cout << "Array column sum are: ";
    for(int i=0; i<m; i++) {
        int sum = 0;
        for(int j=0; j<n; j++)
            sum += arr[j][i];
        cout << sum << "  ";
    }  
    cout << endl;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Array elements are:\n";      
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << *(*(arr+i)+j) << "  ";  //cout << arr[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
    
    rowSum(arr, 3, 3);
    colSum(arr, 3, 3);

    return 0;
}
