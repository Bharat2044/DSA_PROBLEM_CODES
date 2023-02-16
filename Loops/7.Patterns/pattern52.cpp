/*
n = 5
    A
   A B
  A B C
 A B C D
A B C D E
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++)
            cout << " ";
            
        for(int j=1; j<=i; j++)
            cout << (char)('A'+j-1) << " ";
        cout << endl;
    }
    
    return 0;
}