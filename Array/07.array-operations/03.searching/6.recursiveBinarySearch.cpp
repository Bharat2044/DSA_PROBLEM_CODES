#include<iostream>
using namespace std;

int recursiveBinarySearch(int *arr, int s, int e, int x) {    //Time Complexity = O(logn) , Space Complexity = O(n) -> Auxilary Space
    if(s <= e) {
        int mid = s+(e-s)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            return recursiveBinarySearch(arr, mid+1, e, x);
        else
            return recursiveBinarySearch(arr, s, mid-1, x);
    }
    return -1;
}
int main() {
    int n,x;
    cout << "Enter size of array: ";
    cin>>n;
    int *arr = new int[n];
    cout << "Enter array elements in increasing order: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Enter element want to find: ";
    cin >> x;
    if(recursiveBinarySearch(arr, 0, n-1, x) == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << recursiveBinarySearch(arr, 0, n-1, x);

    delete []arr;
    return 0;
}