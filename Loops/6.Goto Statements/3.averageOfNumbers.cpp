// This program calculates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and 
// calculates the average number entered before it.

# include <iostream>
using namespace std;

int main() {
    int  n, i;

    cout << "Maximum number of inputs: ";
    cin >> n;
    
    float num, average, sum = 0.0;

    for(i=1; i<=n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num;
        
        if(num < 0.0) {
           // Control of the program move to jump:
            goto jump;
        } 
        sum += num;
    }
    
    jump:
        average = sum / (i - 1);
    cout << "\nAverage = " << average;
        
    return 0;
}