//Task: Create a program that calculates the cost of a purchase.
//Requirements:
//Ask the user for the price of one item.
//Ask the user for the quantity of items.
//Calculate the total cost.
//Apply a 10% discount if the total cost exceeds 100.
//Display the original total, the discount amount, and the final price.
//What you will practise: double, user input, arithmetic operations, if and else statements.
//Folder name: 04-shopping-calculator

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    double a;
    cout<<"Wie viel kostet ein Artikel? "<<endl;
    cin>>a;
    int b;
    cout<<"Wie viele Artikel haben Sie gekauft?" <<endl;
    cin>>b;
    double c=a*b ;
    cout <<fixed << setprecision(2);
    if (c>100){
            double rabat=c*0.10;
            double d=c-rabat;
              cout<<"Ursprünglicher Preis: "<<c<<endl;
            cout<<"Rabatt: "<<rabat<<endl;
            cout<<"Endpreis: " <<d<<endl;
        cout<<"Der Gesamtbetrag beträgt; "<<d<<" Euro " <<endl;
    }
    else {
              double rabat=c*0;
            double d=c-rabat;
              cout<<"Ursprünglicher Preis: "<<c<<endl;
            cout<<"Rabatt:  "<<rabat<<endl;
            cout<<"Endpreis: "<<d<<endl;
            cout<<"Der Gesamtbetrag beträgt: "<<a*b<<" Euro " <<endl;

    }

    return 0;

}