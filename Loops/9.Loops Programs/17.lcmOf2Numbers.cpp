#include <iostream>
using namespace std;

// Time Complexity - O(min(a, b)), Space Complexity - O(1).
int lcm(int a, int b) {
    
    int max = (a > b) ? a : b;

    /*while(true) {
        if(max % a == 0 && max % b == 0)  
            return max;

        ++max;
    }*/
    
    for(int i = max; i <= a*b; i++) {
        if(i % a == 0 && i % b == 0)
            return i;
    }

    return 0;
}

int main() {
    int x, y;
    cout << "Enter two numbers to find their LCM: ";
    cin >> x >> y;
    
    // Calling the lcm function.
    int LCM = lcm(x, y);    
    
    cout << "LCM(" << x << " ," << y << ") = " << LCM;

    return 0;
}
