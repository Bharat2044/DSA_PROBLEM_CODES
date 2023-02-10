//Question Links : https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/

#include <iostream>
using namespace std;

/*Approach - 1 => Time Complexity = O(n), Space Complexity = O(1)
//If element starts from 1
int firstMissing(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] != i+1)
            return i+1;
    }
    return -1;
}*/

/*Approach - 2 => Time Complexity = O(n), Space Complexity = O(1)
//If element starts from 1
int firstMissing(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    n += 1;
    int naturalSum = n*(n+1)/2;
    return naturalSum-sum;
}*/

/*Approach - 3 => Time Complexity = O(n), Space Complexity = O(1)
int firstMissing(int arr[], int n) {
    int diff = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]-i != diff)
            return i+diff;
    }
    return -1;
}*/

//Approach - 4 => Using Binary Search => Time Complexity = O(logn), Space Complexity = O(1)
int firstMissing(int arr[], int n) {
    int low = 0;
    int high = n-1;
    while(high > low) {
        int mid = (high+low)/2;
        if(arr[mid]-mid == arr[0]){
            if (arr[mid+1]-arr[mid] > 1)
                return arr[mid] + 1;
            // Go right
            else
                low = mid+1;
        }
        else{
            if(arr[mid]-arr[mid-1] > 1)
                return arr[mid] - 1;
            // Go left
            else
                high = mid-1;
        }
    }
    // Here, no missing element found
    return -1;
}

int main() {
    int arr[] = {-2, -1, 0, 1, 2, 3, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstMissing(arr, n);
    
    return 0;
}
