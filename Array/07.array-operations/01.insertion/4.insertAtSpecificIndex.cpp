#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
void insertAtSpecificIndex(int arr[], int &n, int cap, int index, int x) {      // Time Complegity = O(n)
    if((index >= 0) && (index <n)){
        for(int i=n; i>index; i--)
            arr[i] = arr[i-1];
        arr[index] = x;
        n++;
    }
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int index = 3;
    int x = 33;
    cout << "Before insert array element: ";
    printArray(arr, n);
    
    insertAtSpecificIndex(arr, n, cap, index, x);
    
    cout << "After  insert array element: ";
    printArray(arr, n);

    return 0;
}
