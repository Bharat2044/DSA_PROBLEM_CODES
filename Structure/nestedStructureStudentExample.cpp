#include <iostream>
#include<string.h>
using namespace std;

struct date_of_birth {
    int date;
    string month;
    int year;
};
struct Student {
    int roll;
    string name;
    struct date_of_birth dob;
};

void studentOutput(Student t) {
    cout<<t.roll<<"    "<<t.name<<"   "<<t.dob.date<<"/"<<t.dob.month<<"/"<<t.dob.year<<endl;
}
Student studentInput(){
    Student t;
    cout<<"Enter roll number: ";
    cin>>t.roll;
    cin.ignore();           //For buffer flushing
    cout<<"Enter name: ";
    getline(cin, t.name);
    cout<<"Enter date: ";
    cin>>t.dob.date;
    cin.ignore();           //For buffer flushing
    cout<<"Enter month: ";
    getline(cin, t.dob.month);
    cout<<"Enter year: ";
    cin>>t.dob.year;
    return t;
}
int main() {
    //Declaration
    struct Student s1;
    s1.roll = 10;
    s1.name = "Bharat Kumar";
    s1.dob.date = 8;
    s1.dob.month = "September";
    s1.dob.year = 2001;
    cout<<s1.roll<<"    "<<s1.name<<"   "<<s1.dob.date<<"/"<<s1.dob.month<<"/"<<s1.dob.year<<endl;
    cout<<endl;
    
    //Declaration + Initialization
    struct Student s2 = {5, "Deepak Singh", 5, "July", 2004};
    cout<<s2.roll<<"    "<<s2.name<<"   "<<s2.dob.date<<"/"<<s2.dob.month<<"/"<<s2.dob.year<<endl;
    cout<<endl;
    
    //Taking input from user
    Student s3;
    cout<<"Enter roll number: ";
    cin>>s3.roll;
    cin.ignore();           //For buffer flushing
    cout<<"Enter name: ";
    getline(cin, s3.name);
    cout<<"Enter date: ";
    cin>>s3.dob.date;
    cin.ignore();           //For buffer flushing
    cout<<"Enter month: ";
    getline(cin, s3.dob.month);
    cout<<"Enter year: ";
    cin>>s3.dob.year;
    cout<<s3.roll<<"    "<<s3.name<<"   "<<s3.dob.date<<"/"<<s3.dob.month<<"/"<<s3.dob.year<<endl;
    cout<<endl;
    
    //Designated Initialization
    struct Student s4 = s3;     //It's copy s3 all data
    cout<<s4.roll<<"    "<<s4.name<<"   "<<s4.dob.date<<"/"<<s4.dob.month<<"/"<<s4.dob.year<<endl;
    cout<<endl;
    
    //Taking input from user and print output using function
    Student s5;
    s5 = studentInput();
    studentOutput(s5);
    
    return 0;
}
