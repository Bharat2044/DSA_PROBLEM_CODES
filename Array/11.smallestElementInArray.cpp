// Question Links  ==>  https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

/*Approach - 1  -- Brute Force ==>  Time Complexity = O(n^2) , Space Complexity = O(1)
int smallestElementInArray(int *arr, int n) { 
    for(int i=0; i<n; i++) {
        bool flag = true;
        for(int j=0; j<n; j++) {
            if(arr[j] < arr[i]) {
                flag = false;
                break;
            }
        }
        if(flag == true)
            return arr[i];
    }
    return -1;
}*/

/* Approach - 2  ==>  Time Complexity = O(n) , Space Complexity = O(1)
int smallestElementInArray(int *arr, int n) {          //Time Complexity = O(n)
    int ans = INT_MAX;
    for(int i=0; i<n; i++) {
        if(arr[i] < ans)
            ans = arr[i];
    }
    return ans;
}*/

//Approach - 3  -- STL Library  ==>  Time Complexity = O(n) , Space Complexity = O(1)
int smallestElementInArray(int arr[], int n) {
    int ans = *min_element(arr, arr+n);
    return ans;
}

int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout << smallestElementInArray(arr, n);

    delete arr;
    return 0;
}
