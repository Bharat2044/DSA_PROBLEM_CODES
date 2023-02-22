#include <iostream>
using namespace std;

//Time Complexity = O(m*n), Space Complexity = O(1)
bool linearSearch(int arr[][3], int m, int n, int key) {
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] == key)
                return true;
        }
    }  
    return false;
}

int main() {
    int arr[3][3] = {{1, 2, -3}, {44, 5, 6}, {7, 11, 9}};
    int key = 5;
    
    if(linearSearch(arr, 3, 3, key))
        cout  << "Element present in matrix";
    else
        cout  << "Element not present in matrix";

    return 0;
}
