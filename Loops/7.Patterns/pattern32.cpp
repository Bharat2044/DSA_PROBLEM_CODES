/*
 n = 5
1
1  2  1
1  2  3  2  1
1  2  3  4  3  2  1
1  2  3  4  5  4  3  2  1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        //left part
        for(int j=1; j<=i; j++)
            cout << j << " ";
        
        //right part
        for(int k=2; k<=i;k++)
            cout << i-k+1 << " ";
        cout << endl;
    }
    
    return 0;
}
