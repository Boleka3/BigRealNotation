#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include <string>
#include <iterator>
#include <map>
#include <vector>
#include <algorithm>

// File: A2_S24_20220282_8.cpp
// Purpose:This code is used to output a certain pattern decided by two inputs 
// Author: Mohamed Islam Khaled
// Section: S24
// ID: 20220282
// TA:Mohamed Talaat Saad
// Date: 26 Oct 2023

using namespace std;

void pattern(int n, int i) { //integer n decides the number of the asterisks on the longest of the pattern and integer i decides the position of the first asterisk to start the pattern 
    string asterisks(n,'*');
    string blanks(i,' ');
    if (n == 1) {
        cout<<blanks<<"*\n";
    }
    else{
        pattern(n/2,i);
        cout<<blanks<<asterisks<<endl;
        pattern(n/2,i+n/2); //we use this recursive call to print the opposite of the half above of the longest line
    }
}


int main(){
int n,i;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter i:";
    cin>>i;
pattern(n,i);
    return 0;
}
// n=8 longest asteriks line
//i=0 position to start
//*
//* *
//  *
//* * * *
//    *
//    * *
//      *
//* * * * * * * *
//        *
//        * *
//          *
//        * * * *
//            *
//            * *
//              *
