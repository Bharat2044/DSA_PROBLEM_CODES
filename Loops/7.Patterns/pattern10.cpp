/*
    n = 5
        *
      * *
    *   *
  *     *
* * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++)
            cout << "  ";
        for(int j=1; j<=i; j++) {
            if((i==n) || (j==1) || (i==j))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
