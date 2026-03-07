#include <iostream>  
using namespace std;  

int main() {

    int day;   // Din ka number store karne ke liye variable

    // User se din ka number lene ka message display karna
    cout << "Enter day number (1-7): ";
    cin >> day;   // User se day number input lena

    
    // Switch statement din ke number ke mutabiq day ka name show karega
    switch(day) {

        case 1:
            cout << "Monday";    // Agar din ka number 1 ho
            break;               // Switch se bahar nikalne ke liye

        case 2:
            cout << "Tuesday";   // Agar din ka number 2 ho
            break;

        case 3:
            cout << "Wednesday"; // Agar din ka number 3 ho
            break;

        case 4:
            cout << "Thursday";  // Agar din ka number 4 ho
            break;

        case 5:
            cout << "Friday";    // Agar din ka number 5 ho
            break;

        case 6:
            cout << "Saturday";  // Agar din ka number 6 ho
            break;

        case 7:
            cout << "Sunday";    // Agar din ka number 7 ho
            break;

        default:
            cout << "Invalid day number!";  // Agar user galat number de
    }

    return 0;   // Program ka successful end ka signal
}