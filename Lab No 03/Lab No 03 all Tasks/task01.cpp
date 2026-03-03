#include  <iostream>
using namespace std;
int main () {
    // Declare variables to store voltage, current, and resistance
    double voltage, current, resistance;
    // Initialize variables, current and resistance to 0 
voltage = 0;
current = 0;
resistance = 0;
// Prompt the user to enter the voltage, current value
cout << "Enter the value of voltage=";
cin >> voltage;
cout << "Enter the value of current=";
cin >> current;
// Calculate resistance using Ohm's law: R = V / I
resistance = voltage/current;
// Display the voltage, current and calculated resistance entered by the user
cout << "voltage=" << voltage << " " << "volts" << endl;
 cout << "current=" << current << " " << "Ampere" << endl;
 cout << "resistance=" << resistance << " " << "ohms" << endl;

 return 0;

}