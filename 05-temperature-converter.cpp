//Task: Create a program that converts temperatures between Celsius and Fahrenheit.
//Requirements:
//Ask the user to enter a temperature.
//Let the user choose the conversion direction: Celsius to Fahrenheit or Fahrenheit to Celsius.
//Use the appropriate mathematical formula.
//Validate the user’s choice.
//Display the result or an error message if the choice is invalid.
//Formulas:
//Celsius → Fahrenheit: 
//Fahrenheit → Celsius: 
//What you will practise: double, conditional statements, and logical operators

#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
    double t;
cout << "Temperatur: "<<endl;
cin >> t;

cout << "1 - Celsius zu Fahrenheit" << endl;
cout << "2 - Fahrenheit zu Celsius" << endl;

int wahl;
cin >> wahl;

cout << fixed << setprecision(2);

if (wahl == 1) {
    double F = t * 9.0 / 5.0 + 32;
    cout << "Fahrenheit: " << F << endl;
}
else if (wahl == 2) {
    double C = (t - 32) * 5.0 / 9.0;
    cout << "Celsius: " << C << endl;
}
else {
    cout << "Error";
}

return 0;
}