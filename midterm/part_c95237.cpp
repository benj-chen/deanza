#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << fixed << setprecision(2);
    cout << "Enter 32 or 16 for memory size: ";
    int memsz;
    cin >> memsz;
    switch(memsz) {
        case 32: case 16: break;
        default:
        cout << "bad memory size" << endl;
        return 0;
    }
    const double SALES_TAX = 0.0925;
    cout << "Enter N, R, or D for status: ";
    cin.ignore();
    char status=cin.get();
    double pretax;
    switch(status) {
        case 'N':
        pretax = (memsz==16? 499.99 : 549.99);
        break;
        case 'R':
        pretax = (memsz==16? 419.99 : 429.99);
        break;
        case 'D':
        pretax = (memsz==16? 339.99 : 359.99);
        break;
        default:
        cout << "bad status" << endl;
        return 0; 
    }
    cout << "Enter the console quantity to buy: ";
    int quantity;
    cin >> quantity;
    if (quantity<0) {
        cout << "bad quantity" << endl; return 0;
    }
    pretax *= quantity;
    double tax = pretax * SALES_TAX;
    cout << "The item price is $" << pretax << endl;
    cout << "The sales tax is  $" << tax << endl;
    cout << "The total bill is $" << pretax+tax << endl;
}