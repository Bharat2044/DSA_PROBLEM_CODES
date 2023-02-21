/*
 n = 4
*       *
*       *
*       *
* * * * *
*       *
*       *
*       *

*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=2*n-1; i++) {
        for(int j=1; j<=n; j++) {
            if(i==n || j==1 || j==n)
                cout << "* ";
            else
                cout <<"  ";
        }
        cout << endl;
    }

    return 0;
}
