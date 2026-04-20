#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;     // n = user input number ,  i = loop counter (starts from 1) , sum = stores total sum (initially 0)
                                 
 cout << "Enter a positive integer: ";   // Ask user to enter a number
    cin >> n;

    while (i <= n) {       // Loop runs from i = 1 to n

        sum += i;   // add i to sum
        i++;        // increment i
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;     // Display the final result

    return 0;
}