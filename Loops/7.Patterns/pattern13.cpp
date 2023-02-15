/*
    n = 5
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        //for space
        for(int s=1; s<=n-i; s++)
            cout << " ";
        //for star
        for(int j=1; j<=i; j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
