#include<iostream>
using namespace std;

void printInReverse(int *arr, int n) {          //Time Complexity = O(n)
    cout << "Array elements in reverse order:\n";
    for(int i=n-1; i>=0; i--) 
        cout << arr[i] << "   ";
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    printInReverse(arr, n);
    
    delete []arr;
    return 0;
}