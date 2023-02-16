/*
n = 5
    A
   A B
  A   C
 A     D
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
            
        for(int j=1; j<=i; j++) {
            if(i==n || j==1 || j==i)
                cout << (char)('A'+j-1) << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    return 0;
}