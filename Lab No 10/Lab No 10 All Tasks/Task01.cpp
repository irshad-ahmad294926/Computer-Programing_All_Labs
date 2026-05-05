#include <iostream>
using namespace std;

// Function declaration
void multiply(int num1, int num2);

int main() {
    int a, b;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Function call (passing parameters)
    multiply(a, b);

    return 0;
}

// Function definition
void multiply(int num1, int num2) {
    int product = num1 * num2;

    cout << "Product = " << product << endl;
}