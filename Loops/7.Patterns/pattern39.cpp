/*
n = 4 
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1)
                cout << "* ";
            else
                cout << j-1 << " ";
        }
        for(int k=2; k<=i; k++) {
            if(k==i)
                cout << "* ";
            else
                cout << i-k << " ";
        }
        cout << endl;
    }
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            if(j==1)
                cout << "* ";
            else
                cout << j-1 << " ";
        }
        for(int k=2; k<=i; k++) {
            if(k==i)
                cout << "* ";
            else
                cout << i-k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
