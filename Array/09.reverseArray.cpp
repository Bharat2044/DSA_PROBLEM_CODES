#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout << arr[i] << "   ";
    cout << endl;
}
/* Approach-1  -->  Time Complexity = O(n) , Space Complexity = O(n)
void arrayReverse(int *arr, int n) {          
    int temp[n];
    int j = 0;
    //copy arr array elements into temp array
    for(int i=n-1; i>=0; i--){
        temp[j] = arr[i];
        j++;
    }
    //copy temp array elements into arr array
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}*/

// Approach-2 => 2-pointer -->  Time Complexity = O(n) , Space Complexity = O(1)
void arrayReverse(int *arr, int n) {          
    int st=0, end=n-1;
    while(st < end) {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "Before reversed array elements : ";
    printArray(arr, n);
    
    arrayReverse(arr, n);
    
    cout << "After  reversed array elements : ";
    printArray(arr, n);
    
    delete []arr;
    return 0;
}
