/*
n = 4 
1 
2 * 3 
4 * 5 * 6 
7 * 8 * 9 * 10
7 * 8 * 9 * 10 
4 * 5 * 6 
2 * 3 
1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=2*i-1; j++) {
            if(j%2 == 1)
                cout << count++ << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    for(int i=n; i>=1; i--) {
        count = count-i;
        int temp = count;
        for(int j=1; j<=2*i-1; j++) {
            if(j%2 == 1)
                cout << count++ << " ";
            else
                cout << "* ";
        }
        cout << endl;
        count = temp;
    }
    
    return 0;
}
