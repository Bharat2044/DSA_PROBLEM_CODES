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
    //Declaration
    struct Student s1;    
    s1.roll = 10;
    s1.name = "Bharat Kumar";
    //XXX     s.dept = "CSE";     //Error
    strcpy(s1.dept, "CSE");
    s1.marks = 99.99; 
    cout<<"Output for Student s1===>\n";
    cout<<s1.roll<<"    "<<s1.name<<"    "<<s1.dept<<"    "<<s1.marks<<endl;   
    s1.fun();
    
    //Declaration + Initialization 
    Student s2 = {1, "Deepak Kumar", "ECE", 85.20};      
    cout<<"\n\nOutput for Student s2===>\n"; 
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
    cout<<"\n\nOutput for Student s3===>\n";
    cout<<s3.roll<<"    "<<s3.name<<"    "<<s3.dept<<"    "<<s3.marks<<endl;
    
    //Designated Initialization
    struct Student s4 = s3;     //It's copy s3 all data
    cout<<"\n\nOutput for Student s4===>\n";
    cout<<s4.roll<<"    "<<s4.name<<"    "<<s4.dept<<"    "<<s4.marks<<endl;
    cout<<endl;
    
    //Taking input from user and print output using function
    Student s5;
    s5 = studentInput();
    cout<<"\n\nOutput for Student s5===>\n";
    studentOutput(s5);

    return 0;
}
