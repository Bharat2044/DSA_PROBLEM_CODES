#include <iostream>
#include<string.h>
using namespace std;

void displayOutput(int , string);   //Forward declaration
struct Student {
    int roll;
    string name;
};
void displayOutput(int x, string str) {
    cout<<x<<endl;
    cout<<str<<endl;
}
int main() { 
    Student s = {5, "Deepak Kumar"};    
    displayOutput(s.roll, s.name);
    
    return 0;
}
