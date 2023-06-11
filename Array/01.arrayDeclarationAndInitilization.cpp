#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "  ";
        
    cout << endl << endl;
}

int main() {
    int A[5];                               // Array Declaration
    int B[5] = {1, 2, 3, 4, 5};             // Array Declaration + Initialization
    int C[5] = {2, 4};                      // Array Declaration + Initialization
    int D[5] = {0};                         // Array Declaration + Initialization
    int E[] = {2, 4, 6, 8, 10};             // Array Declaration + Initialization
        
    cout << "Array A elements are: ";
    printArray(A, 5);
        
    cout << "Array B elements are: ";
    printArray(B, 5);
        
    cout << "Array C elements are: ";
    printArray(C, 5);
        
    cout << "Array D elements are: ";
    printArray(D, 5);
        
    cout << "Array E elements are: ";
    printArray(E, sizeof(E)/sizeof(E[0]));
    
    
    // Taking input using normal for loop
    int n1;
    cout << "Enter size of array arr1: ";
    cin >> n1;
    
    int arr1[n1];
    
    cout << "Enter array arr1 elements:\n";
    for(int i=0; i<n1; i++)
        cin >> arr1[i];
        
    cout << "Array arr1 elements are: ";
    printArray(arr1, n1);
    
    
    // Taking input using for-each loop
    int n2;
    cout << "Enter size of array arr2: ";
    cin >> n2;
    
    int arr2[n2];
    
    cout << "Enter array arr2 elements:\n";
    for(auto &ele : arr2)
        cin >> ele;
        
    cout << "Array arr2 elements are: ";
    for(auto ele : arr2)
        cout << ele << "  ";
    cout << endl << endl;

    return 0;
}
