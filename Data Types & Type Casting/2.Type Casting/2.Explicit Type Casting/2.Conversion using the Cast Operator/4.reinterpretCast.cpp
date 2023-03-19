// Syntax : reinterpret_cast <datatype> (expression)

#include <iostream>

using namespace std;

int main() {
  int* ptr = new int(98);

  char* ch = reinterpret_cast <char*> (ptr);

  cout << "The value of *ptr is: " << *ptr << endl;
  cout << "The value of ptr is: " << ptr << endl;
  cout << "The value of *ch is: " << *ch << endl;
  cout << "The value of ch is: " << ch << endl;

  return 0;
}




