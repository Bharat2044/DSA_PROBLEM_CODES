#include<iostream>
using namespace std;

int main() {            
    int arr[] = {2, 4, 6, 8, 10};             //Static array
    int size = sizeof(arr) / sizeof(arr[0]);    //Way to find size of array
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int brr[n];             //Static array, this is bad practice
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> brr[i];
    cout << "Array arr element: \n";
    for(int i=0; i<size; i++)
        cout << arr[i] <<"  ";
    cout<<endl;
    cout << "Array brr element: \n";
    for(int i=0; i<n; i++)
        cout << brr[i] <<"  ";
    
    return 0;
}
