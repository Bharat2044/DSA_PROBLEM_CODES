#include<iostream>
using namespace std;

int sumOfArrayElement(int *arr, int n) {          //Time Complexity = O(n)
    int sum = 0;
    for(int i=0; i<n; i++) 
        sum += arr[i];
    return sum;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Total sum of array element = " << sumOfArrayElement(arr, n);
    
    delete []arr;
    return 0;
}