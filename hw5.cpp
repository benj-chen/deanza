/*
Author: Benjamin Chen
Program purpose: Complete homework 5: https://docs.google.com/document/d/1h3Gx0qKlDh6oFtjkLEWr-9RqtyT8fhW32YiKe0JVD48/edit
*/
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time(0) for seed
using namespace std;
int main() {
    cout << "Welcome to the nubmer guessing game." << endl << "You have at most 3 chances to guess a secret number from 1 to 8." << endl << endl;
    int guess, sec_num;
    srand(time(0));
    sec_num = rand() % 8 + 1; // rand() % 8 is a number from 0 to 7, +1 is 1 to 8
    cout << "Enter a number from 1 to 8: ";
    cin >> guess;
    if (sec_num==guess) {
        cout << "Correct guess. Congratulations!" << endl;
        return 0;
    }
    if (sec_num<guess) {
        cout << "Not correct, your guess is too high, try again: ";
    }
    else {
        cout << "Not correct, your guess is too low, try again: ";
    }
    
    cin >> guess;
    if (sec_num==guess) {
        cout << "Correct guess. Congratulations!" << endl;
        return 0;
    }
    if (sec_num<guess) {
        cout << "Not correct, your guess is too high, try again: ";
    }
    else {
        cout << "Not correct, your guess is too low, try again: ";
    }
    
    cin >> guess;
    if (sec_num==guess) {
        cout << "Correct guess. Congratulations!" << endl;
        return 0;
    }
    cout << "Not correct. You have reached your third trial. The correct number is " << sec_num << "." << endl;
}