#include <iostream>
#include<algorithm>
using namespace std;

//Time Complexity = O(m+n) , Space Complexity = O(m+n)
void merge2SortedArray(int arr1[], int arr2[], int m, int n) {
    int arr3[m+n];
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr1[i] <= arr2[j])
            arr3[k++] = arr1[i++];
        else    //else if(arr2[j] < arr1[i])  
            arr3[k++] = arr2[j++];
    }
    while(i < m)
        arr3[k++] = arr1[i++];
    while(j < n)
        arr3[k++] = arr2[j++];
    for(int i=0; i<k; i++)
        cout << arr3[i] << "   ";
}
int main()
{
    int arr1[] = {1, 5, 8, 15, 35, 110};
    int arr2[] = {2, 6, 11, 25, 42, 66, 200};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    merge2SortedArray(arr1, arr2, n1, n2);

    return 0;
}
