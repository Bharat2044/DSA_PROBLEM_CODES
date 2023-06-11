#include <iostream>
using namespace std;

int main() {
    
    for(int i=1; i<=5; i++) {
        cout << "For i = " << i << " ===>\n";
        
        for(int j=1; j<=5; j++) {
            if(j%2 == 0)
                continue;
            cout << j << " ";
        }
        cout << endl;
        
        for(int k=11; k<=15; k++) 
            cout << k << " ";
        
        
        cout << endl;
        cout << endl;
    }

    return 0;
}
