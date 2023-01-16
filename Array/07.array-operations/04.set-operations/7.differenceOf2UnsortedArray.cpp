#include<iostream>
#include<limits.h>
#include<set>
#include<map>
using namespace std;

// Time Complexity = O(m*logn) , Space Complexity = O(1)
bool isElementPresent(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            return true;
    }
    return false;
}
void setDiff(int arr1[], int arr2[], int m, int n) {       //arr1-arr2
    for(int i=0; i<m; i++) {
        if(isElementPresent(arr2, n, arr1[i]) == false) 
            cout << arr1[i] <<"   ";
    }
}
int main() {
    int arr1[] = {1, 5, 12, 10, 20, 3, 8, 9 ,11};
    int arr2[] = {2, 7, 12, 11, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    setDiff(arr1, arr2, n1, n2);      //arr1-arr2
    return 0;
}
