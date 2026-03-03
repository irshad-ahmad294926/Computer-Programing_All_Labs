#include <iostream>
using namespace std;

int main() {
    //  Declare variables
    float x = 0.0, y = 0.0;

    //  Prompt the user to enter value of x
    cout << "Enter the value of x: ";
    cin >> x;

    //  Calculate y using the equation y = 2x + 4
    y = 2 * x + 4;

    //  Display the result
    cout << "For x = " << x << ", y = " << y << endl;

    return 0;  // End of program
}