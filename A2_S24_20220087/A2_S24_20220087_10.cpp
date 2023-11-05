// File: A2_S24_20220087_10.cpp
// Purpose: reproduces the sentence .
// Author: Belal Youness
// Section: 24
// ID: 20220087
// TA: Mohamed Talaat Saad
// Date: 5 Nov 2023


#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    wifstream fin("Input file.txt");//ifstream & ofstream used for files declaration with fin& fout instead of cin and cout
    wofstream fout("Output file.txt");
    if(fin.fail()) {cout<<"can't open Input file!";return 1;}
    if(fout.fail()) {cout<<"can't open Output file!";return 1;}
    wifstream inputFile("Mapinput.txt");
    if (!inputFile.is_open()) {
        wcerr << L"Can't open Input file!"; // L to take more storage (bytes)
        return 1;
    }
    map<wstring, wstring> alpha; // Declaring wstring because it can carry more bits as arabic language used by unicode
    wstring good, better;
    while (inputFile >> good >> better) {
        alpha[good] = better;
    }

    wstring word; // while loop to check if the word will still as it was or will be changed by its keyword
    while (fin >> word) {
        map<wstring, wstring>::iterator cop = alpha.find(word);
        if (cop != alpha.end()) {
            fout << alpha[word] << L' ';
        } else {
            fout << word << L' ';
        }

    }
 return 0;
}
