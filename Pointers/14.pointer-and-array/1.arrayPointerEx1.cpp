#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    //Access array element using array with index
    for(int i=0; i<5; i++)
        cout << arr[i] <<"\t";
    cout<<"\n\n";

    //Access array element using pointer with index
    for(int i=0; i<5; i++)
        cout << ptr[i] <<"\t";
    cout<<"\n\n";
    
    //Access array element using pointer
    for(int i=0; i<5; i++)
        cout << *(ptr+i) <<"\t";

    return 0;
}