#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Enter third number : ";
	cin >> c;
	
	int result = (a > b && a > c) ? a : (b > c) ? b : c;
	cout << "The greatest number is " << result << endl;

	return 0;
}
