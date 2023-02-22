#include <iostream>
#include <limits.h>
using namespace std;

//Time Complexity = O(m*n), Space Complexity = O(1)
int largestElement(int arr[][3], int m, int n) {     
    int ans = INT_MIN;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j] > ans)
                ans = arr[i][j];
        }
    }  
    return ans;
}

int main() {
    int arr[3][3] = {{1, 2, -3}, {44, 5, 6}, {79, 11, 9}};
    
    cout <<"Largest element in matrix = " << largestElement(arr, 3, 3);

    return 0;
}
