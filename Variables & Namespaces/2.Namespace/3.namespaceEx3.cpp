#include <iostream>
using namespace std;

namespace ns1 {
    void greet() { 
        cout << "Hello from namespace ns1." << endl; 
    }
}

namespace ns2 {
    void greet() {
        cout << "Hello from namespace ns2." << endl;
    }
    
    int var = 10;
    
    int func() {
        return var * 3;
    }
}

int main() {
    /*
     * Run the greet() function present in ns1.
     * Used scope resolution operator to call this function.
     */
	// 
	ns1::greet();

	// Run the greet() function present in ns2.
	ns2::greet();
	
	return 0;
}
