#include <iostream>
using namespace std;
int main ()
{
    // Declare variables to store radius and circumference
    double cercumference, radius;
     // Ask user to enter radius of the circle
     cout << "Enter radius = ";
      
     cin >> radius;

      // Formula of circumference:
    // Circumference = 2 × π × radius
    // Here we use π ≈ 3.14
     cercumference = 2 * 3.14 * radius;

     // Display calculated circumference
     cout << "cercumference = " << cercumference << endl;
    
    return 0;

}