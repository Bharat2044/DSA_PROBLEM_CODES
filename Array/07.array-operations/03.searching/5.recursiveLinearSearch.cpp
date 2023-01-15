#include<iostream>
using namespace std;

int recursiveLinearSearch(int *arr, int n, int x) {    //Time Complexity = O(n) , Space Complexity = O(n)
    if(n < 0)
        return -1;
    if(arr[n] == x)
        return n;
    return recursiveLinearSearch(arr, n-1, x);
}
int main() {
    int n,x;
    cout << "Enter size of array: ";
    cin>>n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << "Enter element want to find: ";
    cin >> x;
    if(recursiveLinearSearch(arr, n-1, x) == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << recursiveLinearSearch(arr, n-1, x);

    delete []arr;
    return 0;
}