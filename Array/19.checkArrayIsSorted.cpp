//Question Links : https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1


#include <iostream>
using namespace std;

//Approach - 1 => Time Complexity = O(n^2), Space Complexity = O(1)
bool isSorted(int arr[], int n) {
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;
    for (int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[i])
                return false;
        }
    }
    return true;
}

/*Approach - 2 => Time Complexity = O(n), Space Complexity = O(1)
bool isSorted(int arr[], int n) {
    // Array has one or no element
    if (n == 0 || n == 1)
        return true;
    for (int i=0; i<n-1; i++) {
        // Unsorted pair found
        if (arr[i] > arr[i+1])
            return false;
    }
    // No unsorted pair found
    return true;
}*/

int main() {
    int arr[] = {-10, -4, 0, 1, 5, 8, 19, 22, 34, 123, 456};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(isSorted(arr, n))
        cout << "Sorted";
    else
        cout << "Unsorted";
    
    return 0;
}
