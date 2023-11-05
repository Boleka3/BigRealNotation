// File: A2_S24_20220087_7.cpp
// Purpose: reproduces the sentence .
// Author: Belal Youness
// Section: 24
// ID: 20220087
// TA: Mohamed Talaat Saad
// Date: 30 Oct 2023




#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

struct dominoT {
    int leftdots;
    int rightdots;
};

// function to check if a domino chain can be formed recursively or not
bool formsdominochain(vector<dominoT> &dominos, vector<dominoT> &chain) {
    if (dominos.empty()) {
        // all dominos have been used, a chain is formed and returning true
        return true;
    }

    for (int i = 0; i < dominos.size(); ++i) {
        if (chain.empty() || chain.back().rightdots == dominos[i].leftdots) {
            // adding the current domino to the chain (last domino [right dots])
            chain.push_back(dominos[i]);

            // removing the current domino from the available dominos (that's why we used temp variable)
            dominoT temp = dominos[i];
            dominos.erase(dominos.begin() + i);

            // recursively try to form the chain if the domino didn't match the last one
            if (formsdominochain(dominos, chain)) {
                return true;
            }

            // backtrack (recursion function)
            dominos.insert(dominos.begin() + i, temp);
            chain.pop_back();
        }
    }

    return false;
}

// function to print the domino chain
void outputdominochain(const vector<dominoT> &chain) {
    for (const dominoT &domino : chain) {
        cout << domino.leftdots << "|" << domino.rightdots << " - ";
    }
    cout << endl;
}

int main() {
    vector<dominoT> dominoSet = {
            {2, 6},
            {6, 1},
            {1, 4},
            {4, 4},
            {4, 3}
    };

    vector<dominoT> chain;
    bool canformchain = formsdominochain(dominoSet, chain);

    if (canformchain) {
        cout << "A domino chain can be formed:\n";
        outputdominochain(chain);
    } else {
        cout << "A domino chain cannot be formed.\n";
    }

    return 0;
}
