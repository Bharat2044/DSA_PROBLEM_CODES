// Syntax :
// data_type var_name1, var_name2, ..., var_nameN;        //in variable declaration
// function_call(argument_1, argument_2, ..., argument_N);        // in function call


#include <iostream>
using namespace std;

int add(int num1, int num2, int num3) {
	int result = num1 + num2 + num3;
	return result;
}

int main() {
	// variable declaration
	int n1 = 5, n2 = 10, n3 = 15;

	// function calling using multiple arguments seprated by a comma
	int addition = add(n1, n2, n3);

	cout << addition << endl;

	return 0;
}
