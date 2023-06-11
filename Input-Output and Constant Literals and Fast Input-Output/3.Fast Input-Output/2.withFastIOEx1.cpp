#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);        // ios_base::sync_with_stdio(false);
    
    cout << "1\n" ;
    printf("2\n");
    cout << "3\n";
    printf("4\n");
                        /*
                          2
                          4
                          1
                          3
                         */

    return 0;
}
