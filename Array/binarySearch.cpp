#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int x) {          //Time Complexity = O(logn)
    int st=0, end=n-1;
    while(st<=end) {
        int mid = st+(end-st)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
            end = mid-1;
        else
            st = mid+1;
    }
    return -1;
}
int main() {
    int n,x;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>x;
    cout<<binarySearch(arr, n, x);

    delete arr;
    return 0;
}