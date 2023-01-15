#include<iostream>
using namespace std;

int moveToHeadLinearSearch(int *arr, int n, int x) {          //Time Complexity = O(n)
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            swap(arr[i],arr[0]);
            return i;
        }
    }
    return -1;
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
    if(moveToHeadLinearSearch(arr, n, x) == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << moveToHeadLinearSearch(arr, n, x);

    delete []arr;
    return 0;
}