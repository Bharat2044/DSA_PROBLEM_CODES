#include<iostream>
using namespace std;

void printArray(int *arr, int n) {   
    for(int i=0; i<n; i++) 
        cout<<arr[i]<<"\t";
}
void reverseArray(int *arr, int n) {          //Time Complexity = O(n)
    int st = 0, end = n-1;
    while(st < end)
        swap(arr[st++], arr[end--]);
}
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    reverseArray(arr, n);
    printArray(arr, n);

    delete arr;
    return 0;
}