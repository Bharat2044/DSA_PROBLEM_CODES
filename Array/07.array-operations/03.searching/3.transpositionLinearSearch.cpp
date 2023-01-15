#include<iostream>
using namespace std;

int transitionLinearSearch(int *arr, int n, int x) {          //Time Complexity = O(n)
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            if(i != 0)
                swap(arr[i],arr[i-1]);
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
    if(transitionLinearSearch(arr, n, x) == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << transitionLinearSearch(arr, n, x);

    delete []arr;
    return 0;
}