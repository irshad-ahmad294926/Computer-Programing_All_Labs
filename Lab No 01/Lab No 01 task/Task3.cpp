#include <iostream>
using namespace std;
int main(){
    int radius;       // Declare an integer variable to store the radius
    float PI =3.14;            // Declare an float variable 
    cout << "enter radius:";          //the user to enter the radius of circle
    cin>> radius;                      // Take input from the user 
    float area = PI * radius * radius;         // area formula
    cout << "Area of circle is equal =" << area <<endl;    //print calcullated area to the screen

    return 0;

}