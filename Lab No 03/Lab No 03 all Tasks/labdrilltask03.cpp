#include <iostream>
using namespace std;

int main()
{
    // Variables define
    double length, width, area, perimeter;

    // Initialize 
    length = 0;
    width = 0;
    area = 1;
    perimeter = 1;

    //  User  input
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Area Perimeter calculate 
    area = length * width;
    perimeter = 2 * (length + width);

    //  Result display 
    cout << "\nArea of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}