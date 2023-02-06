#include<iostream>
using namespace std;

void printArray(int *arr, int n) {          //Time Complexity = O(n)
    for(int i=0; i<n; i++) 
        cout<<arr[i]<<"\t";
}
int main() {
    int n,x;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    printArray(arr, n);

    delete arr;
    return 0;
}
