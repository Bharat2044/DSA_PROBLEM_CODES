#include<iostream>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd'};
    char *ptr = arr;
    cout << arr[1] << endl;
    cout << *(ptr+1) << endl;
    cout << arr << endl;
    cout << ptr << endl;
    cout << arr+2 << endl;
    cout << ptr+2 << endl;

    return 0;
}
