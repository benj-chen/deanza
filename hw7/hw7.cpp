/*
Author: Benjamin Chen
Program purpose: Use text files and functions
*/
#include <iostream>
#include <fstream>
#include <climits> // INT_MAX, INT_MIN
#include <iomanip>
using namespace std;
void processFile(string);
void displayResults(int sm, int lg, double avg, int lCount, int hCount);
int main() {
    cout << "This program processes a file." << endl;
    string name;
    cout << "Enter a file name: ";
    cin >> name;
    processFile(name);
}
void processFile(string fileName) {
    // get the average
    ifstream in;
    in.open(fileName);

    string rawInput;
    if ( !(in.is_open()) ) { // if using underscores is bad then why
    // is it is_open and not isOpen? please change your
    // mind about camelCase being better than underscores.
        cout << "error: file was not opened because it does not exist" << endl;
        return;
    }
    getline(in,rawInput); // the first line is not numbers
    int numInput, // get numbers for average, lowest and highest nums
        numItems = 0,
        sum = 0,
        min = INT_MAX,
        max = INT_MIN;
    while (in >> numInput) {
        numItems++;
        sum += numInput;
        if (min > numInput) min = numInput;
        if (max < numInput) max = numInput;
    }
    if (!numItems) {
        // numItems is 0, so there were no numbers
        cout << "File does not contain any numbers" << endl;
        return;
    }
    double avg = sum / (double) numItems;
    in.close();
    in.open(fileName);

    int below=0, above=0; // below the average, above the average
    getline(in,rawInput); // the first line is not numbers
    while (in >> numInput) {
        if (numInput < avg) below++;
        else if (numInput > avg) above++;
    }
    // new: close the file
    in.close();
    displayResults(min, max, avg, below, above);
    // displayResults
}
void displayResults(int sm, int lg, double avg, int belowCount, int aboveCount) {
    cout << setw(25) << "Smallest" << setw(12) << sm << endl;
    cout << setw(25) << "Largest" << setw(12) << lg << endl;
    cout << setw(25) << "Average" << setw(12) << avg << endl; // setprecision() probably is not needed from looking at the sample output
    cout << endl;
    cout << setw(25) << "Numbers below the average" << setw(12) << belowCount << endl;
    cout << setw(25) << "Numbers above the average" << setw(12) << aboveCount << endl;

}