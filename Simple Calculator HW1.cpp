// Simple Calculator 

#include <iostream>
using namespace std;
int main(){

//Declare Variables 
double num1=0;
double num2=0;

//Output and input lines
cout << "Enter two numbers: ";
cin >> num1 >> num2;

//Calculations
double Sum = num1 + num2;
double Difference = num1 - num2;
double Product = num1 * num2;
double Quotient = num1 / num2;

//Results Displayed
cout << "Sum is\t: "<< Sum << endl;
cout << "Difference is\t: "<< Difference << endl;
cout << "Product is\t: "<< Product << endl;
cout << "Quotient is\t: "<< Quotient << endl;

return 0;

}