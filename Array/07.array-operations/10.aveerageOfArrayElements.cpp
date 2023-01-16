#include<iostream>
using namespace std;

float sumOfArrayElement(int *arr, int n) {          //Time Complexity = O(n)
    int sum = 0;
    for(int i=0; i<n; i++) 
        sum += arr[i];
    return (float)sum/n;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Average of array element = " << sumOfArrayElement(arr, n);
    
    delete []arr;
    return 0;
}