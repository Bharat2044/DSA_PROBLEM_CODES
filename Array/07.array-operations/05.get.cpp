#include<iostream>
using namespace std;

int get(int *arr, int n, int index) {          //Time Complexity = O(1)
    if(index>=0 && index<n)
        return arr[index];
    return -1;
}
int main() {
    int n, index;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Enter index number want to find element: ";
    cin >> index;
    cout << get(arr, n, index);

    delete []arr;
    
    return 0;
}