#include<iostream>
#include<limits.h>
using namespace std;

int largestElementInArray(int *arr, int n) {          //Time Complexity = O(n)
    int ans = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<largestElementInArray(arr, n);

    delete arr;
    return 0;
}