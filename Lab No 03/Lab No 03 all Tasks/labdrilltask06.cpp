#include <iostream>   // Include input-output library
using namespace std;

int main() {

    //  Define and initialize variables
    float R1 = 0.0, R2 = 0.0, R3 = 0.0;     // Star resistances
    float R12 = 0.0, R23 = 0.0, R31 = 0.0;  // Delta resistances
    float sum = 0.0;                        // Sum for calculation

    //  Prompt user to enter star resistor values
    cout << "Enter Star Resistance R1 (ohms): ";
    cin >> R1;

    cout << "Enter Star Resistance R2 (ohms): ";
    cin >> R2;

    cout << "Enter Star Resistance R3 (ohms): ";
    cin >> R3;

    //  Calculate corresponding delta resistances
    // Formula: R12 = (R1R2 + R2R3 + R3R1) / R3
    sum = (R1 * R2) + (R2 * R3) + (R3 * R1);

    R12 = sum / R3;
    R23 = sum / R1;
    R31 = sum / R2;

    //  Display all parameters appropriately
    
    cout << "\nStar Resistances:" << endl;
    cout << "R1 = " << R1 << " ohms" << endl;
    cout << "R2 = " << R2 << " ohms" << endl;
    cout << "R3 = " << R3 << " ohms" << endl;

    cout << "\nEquivalent Delta Resistances:" << endl;
    cout << "R12 = " << R12 << " ohms" << endl;
    cout << "R23 = " << R23 << " ohms" << endl;
    cout << "R31 = " << R31 << " ohms" << endl;

    return 0;   // End of program
}