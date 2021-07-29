/*
Author: Benjamin Chen
Program purpose: Use loops and if statements
*/
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    cout << "This program displays all numbers divisble by a certain divisor starting from 10." << endl << endl;
    int div;
    cout << "Enter a divisor from 2 to 10: ";
    cin >> div;
    while (div < 2 || div > 10) {
        cout << div << " is not in the range of 2 to 10." << endl <<
        "Enter a divisor from 2 to 10: ";
        cin >> div;
    }
    int max;
    cout << "Enter the largest number to be generated. It must be in the range of 10-500: ";
    cin >> max;
    while (max < 10 || max > 500)
    {
        cout << max << " is not in the range of 10-500." << endl <<
        "It must be in the range of 10-500: ";
        cin >> max;
    }
    cout << "Generated numbers divisible by " << div << " from 10 to " << max << ":" << endl;
    int term = 0; // when term is 15, cout << endl
    int sum = 0, ct = 0, start = 10 + div - 10 % div /* first multiple of div after 10*/, end = div*(max/div);
    for (int i = start;
    i <= end; i+=div) {
        cout << setw(6) << i;
        sum += i;
        ct++;
        if (++term == 15) {
            cout << endl;
            term=0;
        }
    }
    cout << endl;
    cout << "Total sum: " << sum << endl;
    cout << "Count:     " << ct << endl;
    cout << "Average:   " << (start + end) / 2.0 << endl;
}