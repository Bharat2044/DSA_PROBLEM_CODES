#include <iostream>
#include<string.h>
using namespace std;

struct Student {
    int roll;
    string name;
    char dept[10];
    float marks;
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
    struct Student s1[2];    
    s1[0].roll = 10;
    s1[0].name = "Bharat Kumar";
    //XXX     s1[0].dept = "CSE";     //Error
    strcpy(s1[0].dept, "CSE");
    s1[0].marks = 99.99; 
    
    s1[1].roll = 10;
    s1[1].name = "Raj Kumar Singh";
    strcpy(s1[1].dept, "ECE");
    s1[1].marks = 88.45;
    cout<<"Output for Student s1===>\n";
    cout<<s1[0].roll<<"    "<<s1[0].name<<"    "<<s1[0].dept<<"    "<<s1[0].marks<<endl;
    cout<<s1[1].roll<<"    "<<s1[1].name<<"    "<<s1[1].dept<<"    "<<s1[1].marks<<endl;
    
    //Declaration + Initialization 
    Student s2[2] = {{1, "Deepak Kumar", "ECE", 85.20}, {1, "Pankaj Sharma", "Civil", 45.32}};
    cout<<"\n\nOutput for Student s2===>\n";
    cout<<s2[0].roll<<"    "<<s2[0].name<<"    "<<s2[0].dept<<"    "<<s2[0].marks<<endl;
    cout<<s2[1].roll<<"    "<<s2[1].name<<"    "<<s2[1].dept<<"    "<<s2[1].marks<<endl;
    cout<<endl;
    
    //Taking Input from User
    Student s3[2];
    cout<<"Enter roll number for s3[0]: ";
    cin>>s3[0].roll;
    cin.ignore();       //for buffer flushing   --> In c use fflush(stdin)
    cout<<"Enter name for s3[0]: ";
    getline(cin, s3[0].name);
    cout<<"Enter department for s3[0]: ";
    cin.getline(s3[0].dept, 10);
    cout<<"Enter marks for s3[0]: ";
    cin>>s3[0].marks;
    cout<<endl;
    cout<<"Enter roll number for s3[1]: ";
    cin>>s3[1].roll;
    cin.ignore();       //for buffer flushing   --> In c use fflush(stdin)
    cout<<"Enter name for s3[1]: ";
    getline(cin, s3[1].name);
    cout<<"Enter department for s3[1]]: ";
    cin.getline(s3[1].dept, 10);
    cout<<"Enter marks for s3[1]: ";
    cin>>s3[1].marks;
    cout<<"\n\nOutput for Student s3===>\n";
    cout<<s3[0].roll<<"    "<<s3[0].name<<"    "<<s3[0].dept<<"    "<<s3[0].marks<<endl;
    cout<<s3[1].roll<<"    "<<s3[1].name<<"    "<<s3[1].dept<<"    "<<s3[1].marks<<endl;
    
    //Designated Initialization
    struct Student s4[2] = {s3[0], s3[1]};     //It's copy s3 all data
    cout<<"\n\nOutput for Student s4===>\n";
    cout<<s3[0].roll<<"    "<<s3[0].name<<"    "<<s3[0].dept<<"    "<<s3[0].marks<<endl;
    cout<<s3[1].roll<<"    "<<s3[1].name<<"    "<<s3[1].dept<<"    "<<s3[1].marks<<endl;
    cout<<endl;

    return 0;
}
