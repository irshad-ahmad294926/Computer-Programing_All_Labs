#include <iostream>
using namespace std;

int main() {
    int rows;      // variable for number of rows

    cout << "Enter number of rows: ";
    cin >> rows;               // take input from user     

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {

        // Inner loop for printing asterisks
        for (int j = 1; j <= i; j++) {
            cout << "* ";   // print star
        }
           cout << endl;
          
    }

    return 0;
}
