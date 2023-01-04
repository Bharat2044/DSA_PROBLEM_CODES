#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}
int main() {
    int x = 5;
    int y = 10;
    cout << sum(x, y) << endl;

    return 0;
}
