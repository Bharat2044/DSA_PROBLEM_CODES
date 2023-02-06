// Questions Links => https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/0

#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

//Approach - 1  -- Brute Force ==>  Time Complexity = O(n^2) , Space Complexity = O(1)
int largestElementInArray(int *arr, int n) { 
    for(int i=0; i<n; i++) {
        bool flag = true;
        for(int j=0; j<n; j++) {
            if(arr[j] > arr[i]) {
                flag = false;
                break;
            }
        }
        if(flag == true)
            return arr[i];
    }
    return -1;
}

/*Approach - 2  ==>  Time Complexity = O(n) , Space Complexity = O(1)
int largestElementInArray(int *arr, int n) {          
    int ans = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > ans)
            ans = arr[i];
    }
    return ans;
}*/

/*Approach - 3  -- STL Library  ==>  Time Complexity = O(n) , Space Complexity = O(1)
int largestElementInArray(int arr[], int n) {
    int ans = *max_element(arr, arr+n);
    return ans;
}*/ 

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
