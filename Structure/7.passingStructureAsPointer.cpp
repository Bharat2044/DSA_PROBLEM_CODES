#include <iostream>
#include<string.h>
using namespace std;

void displayOutput(int , string);   //Forward declaration
struct Student {
    int roll;
    string name;
};

void displayOutput(Student *ptr) {
    cout<<ptr->roll<<endl;   //cout<<(*ptr).roll<<endl;
    cout<<(*ptr).name<<endl;    //cout<<ptr->name<<endl;   
}
int main() { 
    Student s = {5, "Bharat Kumar"}; 
    displayOutput(&s);
    
    return 0;
}
