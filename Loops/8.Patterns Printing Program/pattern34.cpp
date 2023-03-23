/*
    n = 5
********1********

*******2*2*******

******3*3*3******

*****4*4*4*4*****

****5*5*5*5*5****

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=2*n-i-1; s++)
            cout << "*";
        for(int j=1; j<=i; j++)
            cout << i << "*";
        for(int k=1; k<=2*n-i-2;k++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
