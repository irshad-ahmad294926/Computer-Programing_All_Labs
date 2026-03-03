#include <iostream>
using namespace std;

int main()
{
    //  Variables define 
    double R1, R2, Rnet;

    //  Initialize 
    R1 = 0;
    R2 = 0;
    Rnet = 0;

    // User  input 
    cout << "Enter value of Resistor R1 (ohms): ";
    cin >> R1;

    cout << "Enter value of Resistor R2 (ohms): ";
    cin >> R2;

    //  Net resistance calculate 
    Rnet = (R1 * R2) / (R1 + R2);

    //  Result display 
    cout << "\nResistor R1 = " << R1 << " ohms" << endl;
    cout << "Resistor R2 = " << R2 << " ohms" << endl;
    cout << "Net Resistance (Parallel) = " << Rnet << " ohms" << endl;

    return 0;
}