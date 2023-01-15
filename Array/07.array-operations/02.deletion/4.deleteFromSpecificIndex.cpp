#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
int deletionFromSpecificIndex(int arr[], int &n, int cap, int index) {      // Time Complegity = O(n)
    if((index >= 0) && (index < n)) {
        int x = arr[index];
        for(int i=index; i<n-1; i++)
            arr[i] = arr[i+1];
        n--;
        return x;
    }
    return -1;
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int index = 2;
    cout << "Before delete array element: ";
    printArray(arr, n);
    
    cout << "Deleted element = " << deletionFromSpecificIndex(arr, n, cap, index) << endl;
    
    cout << "After  delete array element: ";
    printArray(arr, n);

    return 0;
}
