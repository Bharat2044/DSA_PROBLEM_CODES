#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
int deletionFromLast(int arr[], int &n) {      // Time Complegity = O(1)
    int x = arr[n-1];
    arr[n-1] = arr[n-2];
    n--;
    return x;
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    cout << "Before delete array element: ";
    printArray(arr, n);
    
    cout << "Deleted element = " << deletionFromLast(arr, n) << endl;
    
    cout << "After  delete array element: ";
    printArray(arr, n);

    return 0;
}
