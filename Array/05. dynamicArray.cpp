#include<iostream>
using namespace std;

int main() {            
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];             //dynamic array in C
    //int *arr = (int*) malloc(n*sizeof(int));             //dynamic array in C
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << "\nArray element are: \n";
    for(int i=0; i<n; i++)
        cout << arr[i] <<"  ";
    cout<<endl;
    
    delete []arr;     //Deallocation in C++
    //free(arr);          //Deallocation in C
    
    return 0;
}
