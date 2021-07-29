/*
Author: Benjamin Chen
Program purpose: Complete homework 3: https://docs.google.com/document/d/1DR6VCxet2iByYzPwrZ6NYYSMYAwso3Mo25AZe6JrINg/edit
*/
#include <iostream>
using namespace std;
int main() {
    cout << "my name is Benjamin Chen" << endl;
    string date, month, year;
    cout << "dd mm yyyy: ";
    cin >> date >> month >> year;
    string output = "The date is '" + year + "/" + month + "/" + date + "'.";
    cout << output << endl;
    cout << "The total length of output text is " << output.length() << endl;
}