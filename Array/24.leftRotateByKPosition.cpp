// i/p : arr[] = {1, 2, 3, 4, 5}  ,   k = 3
// o/p : arr[] = {4, 5, 1, 2, 3}

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] <<"   ";
    cout << endl;
}

/* Time Complexity = O(n), Space Complexity = O(1)
void leftRotateByOnePosition(int arr[], int n) {
    int x = arr[0];
    // shifting 
    for(int i = 1; i<n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = x;
}
// Approach - 1 : Using Rotate one by one  ==>  Time Complexity = O(n*k), Space Complexity = O(1)
void leftRotateByKPosition(int arr[], int n, int k) {
    for(int i=1; i<=k; i++)
        leftRotateByOnePosition(arr, n);
}*/

// Approach - 2 : Using Auxiliary Array  ==>  Time Complexity = O(n), Space Complexity = O(n)
/*void leftRotateByKPosition(int arr[], int n, int k) {
    int temp[n];
    int j = 0;
        
    for(int i=k; i<n; i++)
        temp[j++] = arr[i];
    
    for(int i=0; i<k; i++)
        temp[j++] = arr[i];
    
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}*/

// Approach - 3 : By reversing array  ==>  Time Complexity = O(n), Space Complexity = O(1)
void reverse(int arr[], int s, int e) {
    while(s < e)
        swap(arr[s++], arr[e--]);
}
void leftRotateByKPosition(int arr[], int n, int k) {
    // Reverse the first `k` elements
    reverse(arr, 0, k-1);
    // Reverse the remaining `n-k` elements
    reverse(arr, k, n-1);
    // Reverse the whole array
    reverse(arr, 0, n-1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    k = k % n;
        
    cout << "Before left rotate by k position array are:\n";
    printArray(arr, n);
    
    leftRotateByKPosition(arr, n, k);
    
    cout << "\nAfter left rotate by k position array are:\n";
    printArray(arr, n);

    return 0;
}
