#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout<<endl;
}
void set(int *arr, int n, int index, int x) {          //Time Complexity = O(1)
    if(index>=0 && index<n)
        arr[index] = x;
}
int main() {
    int n, index, x;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Enter index where want to set element: ";
    cin >> index;
    cout << "Enter element want to update or replace: ";
    cin >> x;
    cout << "Before update or set array elements:\n";
    printArray(arr, n);
    
    set(arr, n, index, x);
    
    cout << "After update or set array elements:\n";
    printArray(arr, n);

    delete []arr;
    return 0;
}