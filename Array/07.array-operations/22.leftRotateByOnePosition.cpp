// i/p : arr[] = {1, 2, 3, 4, 5};
// o/p : arr[] = {2, 3, 4, 5, 1}

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] <<"   ";
    cout << endl;
}

// Time Complexity = O(n), Space Complexity = O(1)
void leftRotateByOnePosition(int arr[], int n) {
    int x = arr[0];
    
    // shifting 
    for(int i = 1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before left rotate by 1 position array are:\n";
    printArray(arr, n);
    
    leftRotateByOnePosition(arr, n);
    
    cout << "\nAfter left rotate by 1 position array are:\n";
    printArray(arr, n);

    return 0;
}
