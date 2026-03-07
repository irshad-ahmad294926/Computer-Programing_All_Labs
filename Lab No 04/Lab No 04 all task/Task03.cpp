#include <iostream>   
using namespace std;  

int main() {

    int choice;       // User ka menu choice store karne ke liye variable
    double value;     // User se li hui value store karne ke liye
    double result;    // Conversion ka result store karne ke liye

    // Conversion menu display karna
    
    cout << "1 -> Convert Kilometers to Meters" << endl;
    cout << "2 -> Convert Meters to Centimeters" << endl;
    cout << "3 -> Convert Kilograms to Grams" << endl;
    cout << "4 -> Convert Celsius to Fahrenheit" << endl;

    // User se choice lena
    cout << "Enter your choice: ";
    cin >> choice;

    // Switch statement user ki choice ke mutabiq conversion karega
    switch(choice) {

        case 1:
            // Kilometers ko meters me convert karna
            cout << "Enter value in Kilometers: ";
            cin >> value;
            result = value * 1000;  // 1 km = 1000 meters
            cout << "Meters = " << result << endl;
            break;

        case 2:
            // Meters ko centimeters me convert karna
            cout << "Enter value in Meters: ";
            cin >> value;
            result = value * 100;   // 1 meter = 100 centimeters
            cout << "Centimeters = " << result << endl;
            break;

        case 3:
            // Kilograms ko grams me convert karna
            cout << "Enter value in Kilograms: ";
            cin >> value;
            result = value * 1000;  // 1 kg = 1000 grams
            cout << "Grams = " << result << endl;
            break;

        case 4:
            // Celsius ko Fahrenheit me convert karna
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            result = (value * 9/5) + 32;  // Formula: (C × 9/5) + 32
            cout << "Fahrenheit = " << result << endl;
            break;

        default:
            // Agar user galat option choose kare
            cout << "Invalid choice" << endl;
    }

    return 0;  // Program successfully end hone ka signal
}