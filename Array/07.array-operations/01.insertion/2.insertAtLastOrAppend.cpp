#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
void insertAtLastOrAppend(int arr[], int &n, int cap, int x) {      // Time Complegity = O(1)
    if(cap > n){
        arr[n] = x;
        n++;
    }
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    cout << "Before insert array element: ";
    printArray(arr, n);
    insertAtLastOrAppend(arr, n, cap, 33);
    cout << "After  insert array element: ";
    printArray(arr, n);

    return 0;
}
