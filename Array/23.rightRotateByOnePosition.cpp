// i/p : arr[] = {1, 2, 3, 4, 5}
// o/p : arr[] = {5, 1, 2, 3, 4}

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] <<"   ";
    cout << endl;
}

// Time Complexity = O(n), Space Complexity = O(1)
void rightRotateByOnePosition(int arr[], int n) {
    int x = arr[n-1];
    
    // shifting 
    for(int i=n-1; i>=1; i--)
        arr[i] = arr[i-1];
    arr[0] = x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before right rotate by 1 position array are:\n";
    printArray(arr, n);
    
    rightRotateByOnePosition(arr, n);
    
    cout << "\nAfter right rotate by 1 position array are:\n";
    printArray(arr, n);

    return 0;
}
