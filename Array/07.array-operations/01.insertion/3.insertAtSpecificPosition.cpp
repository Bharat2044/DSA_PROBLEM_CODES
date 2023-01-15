#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
void insertAtSpecificIndex(int arr[], int &n, int cap, int pos, int x) {      // Time Complegity = O(n)
    if((pos >= 0) && (pos <n)){
        for(int i=n; i>=pos; i--)
            arr[i] = arr[i-1];
        arr[pos-1] = x;
        n++;
    }
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int pos = 3;
    int x = 33;
    cout << "Before insert array element: ";
    printArray(arr, n);
    
    insertAtSpecificIndex(arr, n, cap, pos, x);
    
    cout << "After  insert array element: ";
    printArray(arr, n);

    return 0;
}
