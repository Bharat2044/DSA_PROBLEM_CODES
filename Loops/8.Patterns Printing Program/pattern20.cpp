/*
 n = 5
*
* *
*   *
*     *
*       * 
*     *
*   * 
* *
*

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // upper half
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1 || j==i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    // lower half
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            if(j==1 || j==i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
