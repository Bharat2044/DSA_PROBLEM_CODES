// i/p : arr[] = {1, 2, 3, 4, 5}  ,   k = 3
// o/p : arr[] = {3, 4, 5, 1, 2}

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] <<"   ";
    cout << endl;
}

/* Time Complexity = O(n), Space Complexity = O(1)
void rightRotateByOnePosition(int arr[], int n) {
    int x = arr[n-1];
    
    // shifting 
    for(int i=n-1; i>=1; i--)
        arr[i] = arr[i-1];
    arr[0] = x;
}
// Approach - 1 : Using Rotate one by one  ==>  Time Complexity = O(n*k), Space Complexity = O(1)
void rightRotateByKPosition(int arr[], int n, int k) {
    for(int i=1; i<=k; i++)
        rightRotateByOnePosition(arr, n);
}*/


// Approach - 2 : Using Auxiliary Array  ==>  Time Complexity = O(n), Space Complexity = O(n)
/*void rightRotateByKPosition(int arr[], int n, int k) {
    int temp[n];
    int j = 0;
    
    for(int i=n-k; i<n; i++)
        temp[j++] = arr[i];
    
    for(int i=0; i<n-k; i++)
        temp[j++] = arr[i];
    
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}*/

// Approach - 3 : By reversing array  ==>  Time Complexity = O(n), Space Complexity = O(1)
void reverse(int arr[], int s, int e) {
    while(s < e)
        swap(arr[s++], arr[e--]);
}
void rightRotateByKPosition(int arr[], int n, int k) {
    // Reverse the last `k` elements
    reverse(arr, n-k, n-1);
    // Reverse the first `n-k` elements
    reverse(arr, 0, n-k-1);
    // Reverse the whole array
    reverse(arr, 0, n-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    k = k % n;
    
    cout << "Before right rotate by k position array are:\n";
    printArray(arr, n);
    
    rightRotateByKPosition(arr, n, k);
    
    cout << "\nAfter right rotate by k position array are:\n";
    printArray(arr, n);

    return 0;
}
