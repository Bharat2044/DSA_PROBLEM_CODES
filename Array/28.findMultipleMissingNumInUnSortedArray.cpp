#include <iostream>
using namespace std;

// Time Complexity = O(n), Space Complexity = O(1)
void multipleMissingEle(int arr[], int n) {
    int diff = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]-i != diff) {
            cout << i+diff << " ";
            diff++;
        }
    }
}

int main() {
    int arr[] = {3, 5, 6, 8, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    multipleMissingEle(arr, n);
    
    return 0;
}
