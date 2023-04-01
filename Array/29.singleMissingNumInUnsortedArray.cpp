// i/p : {3, 4, 1, 5}
// o/p : 2
// i/p : {1, 2, 5, 3, 7, 6}
// o/p : 4

#include <iostream>
#include <algorithm>
using namespace std;

/*Approach - 1 => Time Complexity = O(n^2), Space Complexity = O(1)
//If element are from [1 to (n+1)]
int firstMissing(int arr[], int n) {
    for(int i=0; i<n; i++) {
        bool flag = false;
        for(int j=0; j<n; j++) {
            if(arr[j] == i+1) {
                flag = true;
                break;
            }
        }
        
        if(flag == false)
            return i+1;
    }
    return -1;
}*/

/*Approach - 2 => Time Complexity = O(nlogn), Space Complexity = O(1)
//If element are from [1 to (n+1)]
int firstMissing(int arr[], int n) {
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        if(arr[i] != i+1)
            return i+1;
    }
    return -1;
}*/

/*Approach - 3 => Time Complexity = O(n), Space Complexity = O(1)
//If element are from [1 to (n+1)]
int firstMissing(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    n += 1;
    int naturalSum = n*(n+1)/2;
    return naturalSum-sum;
}*/

//Approach - 4 => Time Complexity = O(nlogn), Space Complexity = O(1)
/*int firstMissing(int arr[], int n) {
    sort(arr, arr+n);
    int diff = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]-i != diff)
            return i+diff;
    }
    return -1;
}*/

//Approach - 5 => Using Hashing => Time Complexity = O(n), Space Complexity = O(n)
int firstMissing(int arr[], int n) {
    
    bool visited[n+2] = {0};
    // mark all present available with value 1
    for(int i=0; i<n; i++) 
        visited[arr[i]] = 1;
    
    // check present or not
    for(int i=1; i<=n+1; i++) {
        if(visited[i] == 0)
            return i;
    }
    
    return -1;
}

int main() {
    // int arr[] = {1, 2, 5, 3, 7, 6};
    
    int arr[] = {3, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << firstMissing(arr, n);

    return 0;
}
