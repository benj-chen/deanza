/*
Author: Benjamin Chen
Program purpose: https://docs.google.com/document/d/1yW8Ia4Zv5u7zzmdDn4mWHituqmqxcQwZbWV3P6liEw8/edit#
*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
int main() {
    cout << "This program counts the vowel occurrences in input phrase" << endl;
    cout << "Enter a phrase and hit Enter (maximum length 299): ";
    char input[300];
    cin.getline(input,300);
    while (input[0] != '\0') {
        int sz = strlen(input);
        int counts[5] = {}; // init everything to 0
        const char UCASE[5] = {'A', 'E', 'I', 'O', 'U'},
                   LCASE[5] = {'a', 'e', 'i', 'o', 'u'};
        int vowel_count=0;
        for (int i = 0; i < sz; i++) {
            char c = input[i];
            for (int j = 0; j < 5; j++) {
                if (UCASE[j] == c || LCASE[j] == c) {
                    counts[j]++;
                    vowel_count++;
                }
            }
        }
        int maxChar;
        int maxCount = -1;
        cout << "Vowel" << setw(11) << "Count" << endl;
        for (int i=0;i<5;i++) {
            cout << LCASE[i] << " - " << UCASE[i] << setw(11) << counts[i] << endl;
            if (counts[i]>maxCount) {
                maxChar=i;
                maxCount = counts[i];
            }
        }
        cout << "Total of vowels is " << vowel_count << endl;
        cout << "Vowel with highest occurence is " << UCASE[maxChar] << endl;
        cout << "Enter a phrase and hit Enter (maximum length 299): ";
        cin.getline(input,300);
    }
}
