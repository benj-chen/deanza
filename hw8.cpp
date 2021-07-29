/*
Author: Benjamin Chen
Program purpose: Use fun ctions with return values, loops, if/else if
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int createRandomFromChar(char inputChar);
int main() {
    srand(time(0));
    char input = 'y';
    while (input == 'y' || input == 'Y') {
        cout << "This program plays a simple random number game.\nEnter 5 vowel characters (a,e,i,o,u or A,E,I,O,U) separated by spaces: ";
        char i1, i2, i3, i4, i5;
        cin >> i1 >> i2 >> i3 >> i4 >> i5;
        cout << "\nThe random numbers are " <<
        createRandomFromChar(i1) << " " <<    
        createRandomFromChar(i2) << " " <<    
        createRandomFromChar(i3) << " " <<    
        createRandomFromChar(i4) << " " <<
        createRandomFromChar(i5) << " " <<
        endl;
        cout << "Do you want to play another game? (Y or y to continue): ";
        cin.ignore(); // ignore line from previous 
        input=cin.get();
        cin.ignore(); // ignore newline
    }
    cout << "Goodbye" << endl;
}
int createRandomFromChar(char inputChar) {
    int res = rand() % 20;
    cerr << time(0) << endl;
    switch(inputChar) {
        case 'u': case 'U':
            res += 20; // res += 81; break;
        case 'o': case 'O':
            res += 20; // res += 61; break;
        case 'i': case 'I':
            res += 20; // res += 41; break;
        case 'e': case 'E':
            res += 20; // res += 21; break;
        case 'a': case 'A':
            return res + 1; // res += 1
    }
    return 0;
    /* alternatively
    switch(inputChar) {
        case 'a': case 'A':
            return rand() % 20 + 1;
        case 'e': case 'E':
            return rand() % 20 + 21;
        case 'i': case 'I':
            return rand() % 20 + 41;
        case 'o': case 'O':
            return rand() % 20 + 61;
        case 'u': case 'U':
            return rand() % 20 + 81;
        default:
            return 0;
    }
    */
    /* alternatively
        if (inputChar == 'a' || inputChar == 'A') {
            return rand() % 20 + 1;
        }
        else if (inputChar == 'e' || inputChar == 'E') {
            return rand() % 20 + 21;
        }
        else if (inputChar == 'i' || inputChar == 'I') {
            return rand() % 20 + 41;
        }
        else if (inputChar == 'o' || inputChar == 'O') {
            return rand() % 20 + 61;
        }
        else if (inputChar == 'u' || inputChar == 'U') {
            return rand() % 20 + 81;
        }
        else return 0;
    // edited with VSCode technology for ease of use purposes.
    // char is integral, so switch is easier*/
}