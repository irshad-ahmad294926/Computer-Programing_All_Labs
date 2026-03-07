#include <iostream>   
using namespace std; 

int main() {

    char grade;    // Student ka grade store karne ke liye character variable

    // User se grade lene ke liye message display karna
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;    // User se grade input lena

   
    // Switch statement grade ke mutabiq result show karega
    switch(grade) {

        case 'A':
            cout << "Excellent";    // Agar grade A ho Switch se bahar nikalne ke liye
            break;                

        case 'B':
            cout << "Very Good";    // Agar grade B ho
            break;

        case 'C':
            cout << "Good";         // Agar grade C ho
            break;

        case 'D':
            cout << "Pass";         // Agar grade D ho
            break;

        case 'F':
            cout << "Fail";        // Agar grade F ho
            break;

        default:
            cout << "Invalid Grade";    // Agar user galat grade de
    }

    return 0;   // Program ka successful end ka signal
}