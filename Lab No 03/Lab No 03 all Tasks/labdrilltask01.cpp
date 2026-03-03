#include <iostream>
using namespace std;
int main ()
{
     // Declare variables to store marks of 5 subjects
    double sub1, sub2, sub3, sub4, sub5;
     // Declare variables to store total marks and average
    double Total, average;
// Initialize all variables with 0
    sub1 = 0;
    sub2 = 0;
    sub3 = 0;
    sub4 = 0;
    sub5 = 0;
    Total = 0;
    average = 0;
// Take input from user for each subject
    cout << "Enter marks for subject 1 = ";
    cin >> sub1;
    cout << "Enter marks for subject 2 = ";
    cin >> sub2;
    cout << "Enter marks for subject 3 = ";
    cin >> sub3;
    cout << "Enter marks for subject 4 = ";
    cin >> sub4;
    cout << "Enter marks for subject 5 = ";
    cin >> sub5;
// Calculate total marks by adding all subjects
    Total = sub1 + sub2 + sub3 + sub4 + sub5;
    // Calculate average by dividing total by number of subjects
    average = Total / 5;
// Display the calculated average
    cout << "average = " << average <<endl;
    
    return 0;

}