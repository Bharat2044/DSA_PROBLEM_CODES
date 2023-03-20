#include <iostream>
using namespace std;

int main() {
    cout << "Size of bool : " << sizeof(bool) << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl << endl;


    int a = 5;
    long x = 9;
    double p = 10.2;
    float g = 2.5;

    cout << "No of Bytes taken up by (a+g) is " << sizeof(a + g) << endl;
    cout << "No of Bytes taken up by (a+x) is " << sizeof(a + x) << endl;
    cout << "No of Bytes taken up by (a+p) is " << sizeof(a + p) << endl;
    cout << "No of Bytes taken up by (x+p) is " << sizeof(x + p) << endl;

    return 0;
}