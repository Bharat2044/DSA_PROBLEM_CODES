#include <iostream>
#include<string.h>
using namespace std;

void displayOutput(int , string);   //Forward declaration
struct Student {
    int roll;
    string name;
};

int main() { 
    Student s = {5, "Bharat Kumar"}; 
    Student *ptr = &s;
    cout<<ptr->roll<<endl;   //cout<<(*ptr).roll<<endl;
    cout<<(*ptr).name<<endl;    //cout<<ptr->name<<endl;   
    
    return 0;
}
