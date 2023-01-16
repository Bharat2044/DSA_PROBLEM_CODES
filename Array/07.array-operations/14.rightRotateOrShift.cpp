#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout << endl;
}
// Time Complexity = O(n) , Space Complexity = O(1)
void rightRotateOrShift(int *arr, int n) {          
    int x = arr[n-1];
    for(int i=n-1; i>=1; i--)
        arr[i] = arr[i-1];
    arr[0] = x;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Before right rotate or shift array elements:\n";
    printArray(arr, n);
    
    rightRotateOrShift(arr, n);
    
    cout << "After  right rotate or shift array elements:\n";
    printArray(arr, n);
    
    delete []arr;
    return 0;
}