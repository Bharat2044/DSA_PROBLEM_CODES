#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
int deletionFromSpecificPosition(int arr[], int &n, int cap, int pos) {      // Time Complegity = O(n)
    if((pos >= 0) && (pos < n)) {
        int x = arr[pos-1];
        for(int i=pos-1; i<n-1; i++)
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
    int pos = 2;
    cout << "Before delete array element: ";
    printArray(arr, n);
    
    cout << "Deleted element = " << deletionFromSpecificPosition(arr, n, cap, pos) << endl;
    
    cout << "After  delete array element: ";
    printArray(arr, n);

    return 0;
}
