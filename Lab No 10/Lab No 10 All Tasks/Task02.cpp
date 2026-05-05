#include <iostream>
using namespace std;

// Function declaration
int getSquare(int number);

int main() {
    int num, result;

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;

    // Function call
    result = getSquare(num);

    // Display result
    cout << "Square = " << result << endl;

    return 0;
}

// Function definition
int getSquare(int number) {
    int square = number * number;
    return square;   // Returning value
}