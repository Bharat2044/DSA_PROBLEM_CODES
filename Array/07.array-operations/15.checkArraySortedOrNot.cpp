#include <iostream>
using namespace std;

bool checkArraySorted(int *arr, int n) {          //Time Complexity = O(logn)
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}
int main()
{
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    if(checkArraySorted(arr, n))
        cout << "Array is sorted";
    else    
        cout << "Array is not sorted";

    return 0;
}
