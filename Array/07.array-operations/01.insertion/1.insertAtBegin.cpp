#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
void insertAtBegin(int arr[], int &n, int cap, int x) {      // Time Complegity = O(n)
    for(int i=n; i>0; i--)
        arr[i] = arr[i-1];
    arr[0] = x;
    n++;
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    cout << "Before insert array element: ";
    printArray(arr, n);
    
    insertAtBegin(arr, n, cap, 33);
    
    cout << "After  insert array element: ";
    printArray(arr, n);

    return 0;
}