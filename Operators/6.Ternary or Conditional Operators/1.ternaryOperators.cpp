#include <iostream>
using namespace std;

int main() {
	// Ternary / Conditional Operator
    true ? cout << "true" : cout << "false";
    cout << endl;
    
    false ? cout << "true" : cout << "false";
    cout << endl;
    
    
	int a = 3, b = 4;
	int result = (a < b) ? b : a;
	cout << "The greatest number is " << result << endl;

	return 0;
}
