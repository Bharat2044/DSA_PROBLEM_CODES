#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
int binarySearch(int *arr, int n, int x) {          //Time Complexity = O(logn)
    int st=0, end=n-1;
    while(st<=end) {
        int mid = st+(end-st)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
            end = mid-1;
        else
            st = mid+1;
    }
    return -1;
}
void deleteFromSoretdArray(int arr[], int &n, int x) {      // Time Complegity = O(n)
    int pos = binarySearch(arr, n, x);
    if(pos == -1){
        cout << "Element not found";
        return;
    }
    for(int i=pos; i<n-1; i++)
        arr[i] = arr[i+1];
    n--;
    cout << "Element deleted" << endl;
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int x = 7;
    cout << "Before delete array element: ";
    printArray(arr, n);
    
    deleteFromSoretdArray(arr, n, x);
    
    cout << "After  delete array element: ";
    printArray(arr, n);

    return 0;
}
