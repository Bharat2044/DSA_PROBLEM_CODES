// i/p: 2.3     o/p: 0.3
// i/p: 8.25    o/p: 0.25
// i/p: -1.3    o/p: 0.7


#include <iostream>
using namespace std;

int main() {
    float n;
    cin >> n;
    
    int y = (int)n;
    if(n < 0)
        y -= 1;
    
    cout << (n-y) << endl;
    
    return 0;
}
