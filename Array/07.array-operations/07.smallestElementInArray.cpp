#include<iostream>
using namespace std;

int minElement(int *arr, int n) {          //Time Complexity = O(n)
    int min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Smallest element in array = " << minElement(arr, n);
    
    delete []arr;
    return 0;
}