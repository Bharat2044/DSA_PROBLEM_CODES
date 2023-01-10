#include <iostream>
#include<string.h>
using namespace std;

void displayOutput(int , string);   //Forward declaration
struct Student {
    int roll;
    string name;
};
void displayOutput(Student t) {
    cout<<t.roll<<endl;
    cout<<t.name<<endl;
}
int main() { 
    Student s = {5, "Bharat Kumar"};    
    displayOutput(s);
    
    return 0;
}
