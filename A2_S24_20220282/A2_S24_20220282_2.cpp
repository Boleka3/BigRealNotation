#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include <string>

// File: A2_S24_20220282_2.cpp
// Purpose: This code turns all male speech to inclusive speech that includes both male and female from the sentence entered by the user by swapping all male speech using loops to a certain distinct string using loops and then swapping that distinct string to inclusive speech using loops.
// Author: Mohamed Islam Khaled
// Section: S24
// ID: 20220282
// TA:Mohamed Talaat Saad
// Date: 26 Oct 2023


int main() {
    using namespace std;
    string s;
    getline(cin,s);

    for(int i=0;i<1000;i++) {
        int index = s.find(" he ");
        if (index != -1) {
            s.replace(index, 4, " xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " he or she ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find("He ");
        if (index != -1) {
            s.replace(index, 3, "xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find("xyz ");
        if (index != -1) {
            s.replace(index, 4, "He or she ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find("Him ");
        if (index != -1) {
            s.replace(index, 4, "xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find("xyz ");
        if (index != -1) {
            s.replace(index, 4, "Him or her ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" him ");
        if (index != -1) {
            s.replace(index, 5, " xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " him or her ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" him.");
        if (index != -1) {
            s.replace(index, 5, " xyz ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " him or her.");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" him?");
        if (index != -1) {
            s.replace(index, 5, " xyz ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " him or her?");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" him,");
        if (index != -1) {
            s.replace(index, 5, " xyz ");
        }
    }
    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " him or her,");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" he.");
        if (index != -1) {
            s.replace(index, 4, " xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " he or she.");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" he,");
        if (index != -1) {
            s.replace(index, 4, " xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " he or she,");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" he?");
        if (index != -1) {
            s.replace(index, 4, " xyz ");
        }
    }

    for(int i=0;i<1000;i++) {
        int index = s.find(" xyz ");
        if (index != -1) {
            s.replace(index, 5, " he or she?");
        }
    }

    cout<<s;


// he "he or she" ;
// He "He or she" ;
// Him "Him or her" ;
// him "him or her" ;

    return 0;
}

