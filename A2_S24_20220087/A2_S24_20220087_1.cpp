// File: A2_S24_20220087_1.cpp
// Purpose: reproduces the sentence .
// Author: Belal Youness
// Section: 24
// ID: 20220087
// TA: ........................
// Date: 28 Oct 2023


#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

int main() {
    const int maxsentencelength = 100;
    char sentence[maxsentencelength];
    cout << "Enter a sentence (up to 100 characters): ";
    cin.getline(sentence, maxsentencelength);
    bool startsentence = true;
    bool newword = true;
    char prevchar = '\0';

    cout << "Output sentence: ";

    for (int i = 0; sentence[i] != '\0'; i++) {
        char currentchar = sentence[i];

        // check for uppercase letters and change to lowercase except the sentence starting char
        if(startsentence) {
            currentchar = toupper(currentchar);
            startsentence = false;
        }
        else if (isupper(currentchar) && newword) {
            currentchar = tolower(currentchar);
        }
        // in this for loop we see if the spaces will be as it was or will be shrunk
        // and for the middle words letters keeping it as it was
        if (currentchar == ' ' || currentchar == '\n') {
            if (prevchar != ' ' && prevchar != '\n') {
                cout << ' ';
                newword = true;
            }
        }
        else {
            cout << currentchar;
            newword = false;
        }
        prevchar = currentchar;
    }
    cout << endl;

    return 0;
}
