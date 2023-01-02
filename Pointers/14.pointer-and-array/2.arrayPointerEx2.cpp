#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for(int i=0; i<5;i++)
        cout << *(ptr+i) << "\t";
    cout<<"\n\n";
    
    (*ptr)++;
    for(int i=0; i<5;i++)
        cout << *(ptr+i) << "\t";
    cout<<"\n\n";
    
    *(ptr+2) = 100;
    for(int i=0; i<5;i++)
        cout << *(ptr+i) << "\t";
    cout<<"\n\n";

    return 0;
}
