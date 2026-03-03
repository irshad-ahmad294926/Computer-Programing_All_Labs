#include <iostream>   // Include input/output stream library
using namespace std;

int main() {
    //  Define and initialize variables
    float R1 = 0.0, R2 = 0.0;      
    float Itotal = 0.0;            
    float I1 = 0.0, I2 = 0.0;     

    //  Prompt user to enter values for resistors and net current
    cout << "Enter the value of resistor R1 (in ohms): ";
    cin >> R1;

    cout << "Enter the value of resistor R2 (in ohms): ";
    cin >> R2;

    cout << "Enter the total current flowing (in amperes): ";
    cin >> Itotal;

    //  Calculate branch currents using the current divider rule
    // Formula: I1 = Itotal * (R2 / (R1 + R2))
    //          I2 = Itotal * (R1 / (R1 + R2))
    I1 = Itotal * (R2 / (R1 + R2));
    I2 = Itotal * (R1 / (R1 + R2));

    // f Display all parameters appropriately
    
    cout << "Resistor R1: " << R1 << " ohms" << endl;
    cout << "Resistor R2: " << R2 << " ohms" << endl;
    cout << "Total Current: " << Itotal << " A" << endl;
    cout << "Branch Current I1 (through R1): " << I1 << " A" << endl;
    cout << "Branch Current I2 (through R2): " << I2 << " A" << endl;

    
   

    return 0;  // End of program
}