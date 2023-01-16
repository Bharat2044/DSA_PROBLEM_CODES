#include<iostream>
using namespace std;

int maxElement(int *arr, int n) {          //Time Complexity = O(n)
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Largest element in array = " << maxElement(arr, n);
    
    delete []arr;
    return 0;
}