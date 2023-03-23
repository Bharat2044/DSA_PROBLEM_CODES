#include <iostream>
using namespace std;

int main() {
    
    for(int i=10; i>=1; i--) {
        if(i <= 5)
            continue;
        cout << "Hello" << endl;
    } 

    return 0;
}