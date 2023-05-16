#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if(marks>=0 && marks<33) 
        cout << "Fail";
    else if(marks>=33 && marks<=50) 
        cout << "D Grade";
    else if(marks>=51 && marks<=70) 
        cout << "C Grade";
    else if(marks>=71 && marks<=90) 
        cout << "B Grade";
    else if(marks>=91 && marks<=100) 
        cout << "A Grade";
    else
        cout << "Invalid marks";

    return 0;
}
