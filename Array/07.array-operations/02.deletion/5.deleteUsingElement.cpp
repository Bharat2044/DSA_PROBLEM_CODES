#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "    ";
    cout << endl;
}
void deletionUsingThrougnElement(int arr[], int &n, int x) {      // Time Complegity = O(n)
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == x)
            break;
    }
    if(i == n){
        cout << "Element not found" << endl;;
        return;
    }
    for(int j=i; j<n-1; j++)
        arr[j] = arr[j+1];
    n--;
    cout << "Element deleted" << endl;
}
int main()
{
    int cap = 10;
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int x = 7;
    cout << "Before delete array element: ";
    printArray(arr, n);
    
    deletionUsingThrougnElement(arr, n, x);
    
    cout << "After  delete array element: ";
    printArray(arr, n);

    return 0;
}
