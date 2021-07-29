/*
Name: Benjamin Chen
Purpose: work with type casting, fixed prexision, and division
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int num1, num2;
	cout << "This program calculates quotient, remainder of 2 numbers" << endl;
	cout << endl << "Enter two numbers separated by a space: ";
	cin  >> num1 >> num2;
	cout << endl << "The quotient of integer division (" << num1 << "/" << num2 << ") is " << num1/num2 << endl;
	cout << "The remainder of integer division (" << num1 << "/" << num2 << ") is " << num1%num2 << endl;
	cout << fixed << setprecision(9);
	cout << "The result of floating-point division (" << num1 << "/" << num2 << ") is " << (double)num1/num2 << endl;
}