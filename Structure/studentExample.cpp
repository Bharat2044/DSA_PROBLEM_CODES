#include <iostream>
#include<string.h>
using namespace std;

struct Student {
    int roll;
    string name;
    char dept[10];
    float marks;
    void fun() {
        cout<<"This is function inside structure"<<endl;
    }
};

void studentOutput(Student t) {
    cout<<t.roll<<"    "<<t.name<<"    "<<t.dept<<"    "<<t.marks<<endl;
}
Student studentInput(){
    Student t;
    cout<<"Enter roll number: ";
    cin>>t.roll;
    cin.ignore();       //for buffer flushing   --> In c use fflush(stdin)
    cout<<"Enter name: ";
    getline(cin, t.name);
    cout<<"Enter department: ";
    cin.getline(t.dept, 10);
    cout<<"Enter marks: ";
    cin>>t.marks;
    return t;
}
int main() {
    struct Student s1;    //Declaration
    s1.roll = 10;
    s1.name = "Bharat Kumar";
    //XXX     s.dept = "CSE";     //Error
    strcpy(s1.dept, "CSE");
    s1.marks = 99.99;
    cout<<s1.roll<<"    "<<s1.name<<"    "<<s1.dept<<"    "<<s1.marks<<endl;
    s1.fun();
    cout<<endl;
    
    Student s2 = {1, "Deepak Kumar", "ECE", 85.20};    //Declaration + Initialization    
    cout<<s2.roll<<"    "<<s2.name<<"    "<<s2.dept<<"    "<<s2.marks<<endl;
    cout<<endl;
    
    //Taking Input from User
    Student s3;
    cout<<"Enter roll number: ";
    cin>>s3.roll;
    cin.ignore();       //for buffer flushing   --> In c use fflush(stdin)
    cout<<"Enter name: ";
    getline(cin, s3.name);
    cout<<"Enter department: ";
    cin.getline(s3.dept, 10);
    cout<<"Enter marks: ";
    cin>>s3.marks;
    cout<<s3.roll<<"    "<<s3.name<<"    "<<s3.dept<<"    "<<s3.marks<<endl;
    cout<<endl;
    
    //Taking input from user through function
    Student s4;
    s4 = studentInput();
    studentOutput(s4);

    return 0;
}
