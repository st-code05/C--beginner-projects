//Task: Create a calculator that works with two numbers. Requirements: Get two numbers from the user. Calculate their sum, difference, product, and quotient. Additionally calculate the remainder if both numbers are integrs. Check for division by zero and do not divide if the second number is zero.What you will practise: variables, std::cin, arithmetic operations, and if statements. Folder name: 03-basic-calculator 

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void functio( double a,char b,double c){
   if (c==0 && (b=='/' or b=='%')){
    cout<<"Error: division by zero "<<endl;
 }
 else if(b=='/'){
    cout<< a <<" / "<< c <<" = "<<a/c<<endl;
 }
 else if (b=='*'){
    cout<< a <<" * "<< c <<" = "<<a*c<<endl;

 }
  else if (b=='+'){
    cout<< a <<" + "<< c <<" = "<<a+c<<endl;
 }
  else if (b=='-'){
    cout<< a <<" - "<< c <<" = "<<a-c<<endl;
 }
  else if (b=='%'){
    cout<< a <<" % "<< c <<" = "<<fmod(a,c)<<endl;
}
  else {
    cout<<"Uknown operator " <<endl;
}
}
int main () {
 double m;
 cin>>m;
 char p;
 cin>>p;
 double v;
 cin>>v;
 functio(m,p,v);

}

