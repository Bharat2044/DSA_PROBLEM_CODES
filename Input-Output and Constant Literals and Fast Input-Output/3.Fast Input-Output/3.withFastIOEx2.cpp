#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);        // ios_base::sync_with_stdio(false);
    
    cout << "1" << endl;
    printf("2\n");
    cout << "3" << endl;
    printf("4");
    
/*Output:
        1
        3
        2
        4
*/

    return 0;
}
