#include <iostream>
using namespace std;
int main () {

    // Declare variables for initial velocity (u), time (t), final velocity (v), and acceleration (a)
    double u, t, v, a;
// Initialize all variables to 0
    u = 0;
    t = 0;
    v = 0;
    a = 0;

    cout << " enter accelaration (a) = ";
    cin >> a;
    cout << " enter initial velocity (u) = ";
    cin >> v;
    cout << "enter time (t) = ";
    cin >> t;
     // Calculate final velocity using the formula: v = u + a * t
     v = u + ( a * t )  ;
     // Display the acceleration, initial velocity,time and final velocity entered by the user
     cout << "accelaration  = " << a << endl;
     cout << "initial velocity = " << u << endl;
     cout << "time  = " << t << endl;
     cout << "final velocity = " << v << endl;

     return 0;
}