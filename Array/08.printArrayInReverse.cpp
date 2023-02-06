#include<iostream>
using namespace std;

void printArrayReverseIn(int *arr, int n) {            //Time Complexity = O(n) 
    for(int i=n-1; i>=0; i--) 
        cout<<arr[i]<<"\t";
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    printArrayReverseIn(arr, n);

    delete arr;
    return 0;
}
