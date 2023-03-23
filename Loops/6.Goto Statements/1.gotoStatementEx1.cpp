/* Synatx:
goto label;
... .. ...
... .. ...
... .. ...
label: 
statement;
... .. ...*/

#include <iostream>
using namespace std;

int main() {
	int n = 4;

	if (n % 2 == 0)
		goto label1;
	else
		goto label2;

    label1:
    	cout << "Even" << endl;
    	return 0;
    
    label2:
    	cout << "Odd" << endl;
}
