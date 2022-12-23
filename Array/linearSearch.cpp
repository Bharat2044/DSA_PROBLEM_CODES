#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int x) {          //Time Complexity = O(n)
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            return i;
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
    cout<<linearSearch(arr, n, x);

    delete arr;
    return 0;
}