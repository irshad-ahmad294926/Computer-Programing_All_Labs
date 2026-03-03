#include <iostream>
using namespace std;
int main () {
    int Number;                 //Declare an integer variable to store the use input 
    cout << "Enter an integer:";    // Ask User 
    cin >> Number;                 //Get input
    if (Number>=0) {                    // Check if is positive
        cout << "your number is positive = " << Number << endl; //If true, print that the number is positive
    }
    else                            //If the condition is false print that the number is negative
    {
        cout << "your number is negitive = " << Number << endl;
    }

    return 0;
}