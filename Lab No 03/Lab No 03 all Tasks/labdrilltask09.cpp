#include <iostream>
#include <cmath>    // For sqrt() function
using namespace std;

int main() {
    //  Define appropriate variables
    float a, b, c;               // Coefficients
    float discriminant, root1, root2;

    //  Prompt user to enter values of coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    //  Calculate roots based on discriminant and display
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and distinct:" << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Two real and equal roots
        root1 = root2 = -b / (2*a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root1 = Root2 = " << root1 << endl;
    }
    else {
        // Complex roots
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex:" << endl;
        cout << "Root1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;  // End of program
}