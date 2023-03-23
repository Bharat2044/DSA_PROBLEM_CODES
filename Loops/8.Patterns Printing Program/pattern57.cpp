/*
    n = 5
*       * * * * *
*       *        
*       *        
*       *        
* * * * * * * * *
        *       *
        *       *
        *       *
* * * * *       *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=2*n-1; i++) {
        for(int j=1; j<=2*n-1; j++) {
            if(i==n || j==n || (i==1 && j>n) || (i<n && j==1) || (i>n && j==n*2-1) || (i==n*2-1 && j<n))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}
