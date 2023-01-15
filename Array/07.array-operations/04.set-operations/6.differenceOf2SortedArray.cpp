#include<iostream>
#include<limits.h>
#include<set>
#include<map>
using namespace std;

// Time Complexity = O(m+n) , Space Complexity = O(1)
void setDiff(int arr1[], int arr2[], int m, int n) {       //arr1-arr2
    int i = 0, j = 0;
    while(i < m && j < n) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else if(arr2[j] < arr1[i])
            j++;
        else {
            i++;
            j++;
        }
    }
    while(i < m)
        cout << arr1[i++] << " ";
}
int main() {
    int arr1[] = {1, 2, 3, 8, 9 ,11};
    int arr2[] = {2, 7, 8, 10, 12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    setDiff(arr1, arr2, n1, n2);       //arr1-arr2
    
    return 0;
}