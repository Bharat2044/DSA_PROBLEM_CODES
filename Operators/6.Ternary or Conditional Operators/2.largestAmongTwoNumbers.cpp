#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	
	int result = (a < b) ? b : a;
	cout << "The greatest number is " << result << endl;

	return 0;
}
