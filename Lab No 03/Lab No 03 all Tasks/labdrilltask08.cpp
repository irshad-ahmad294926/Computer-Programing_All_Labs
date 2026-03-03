#include <iostream>
#include <cmath>   // Include math library for sqrt function
using namespace std;

int main() {
    //  Define appropriate variables
    float base = 0.0, perpendicular = 0.0, hypotenuse = 0.0;

    //  Prompt user to enter base and perpendicular
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the perpendicular of the triangle: ";
    cin >> perpendicular;

    //  Calculate hypotenuse using Pythagoras theorem
    // Formula: hypotenuse = sqrt(base^2 + perpendicular^2)
    hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));

    //  Display the result
    cout << "Hypotenuse of the triangle = " << hypotenuse << endl;

    return 0; // End of program
}