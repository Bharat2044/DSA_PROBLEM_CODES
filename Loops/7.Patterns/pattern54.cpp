/*
 n = 5
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        //left part
        for(int j=1; j<=i; j++)
            cout << (char)('A'+j-1) << " ";

        //right part
        for(int k=2; k<=i;k++)
            cout << (char)('A'+i-k) << " ";
        cout << endl;
    }

    return 0;
}