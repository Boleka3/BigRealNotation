// File: A2_S24_20220087_4.cpp
// Purpose: reproduces the sentence .
// Author: Belal Youness
// Section: 24
// ID: 20220087
// TA: ........................
// Date: 30 Oct 2023



#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
using namespace std;

void sieveoferatosthenes(int N) {
    // create a boolean array "prime[0....n]" and initialize all entries as true.
    // the value in prime[i] will  be false if [i] is not a prime, else it will be true.
    vector<bool> prime(N + 1, true);

    for (int p = 2; p * p <= N; p++) {
        // if prime[p] is not changed, then it is a prime
        // loop runs from p = 2 to the square root of 'n'
        if (prime[p]) {
            // mark all multiples of p as not prime
            // we can't remove it from the boolean array, so we mark them as false
            for (int i = p * p; i <= N; i += p) {
                prime[i] = false;
            }
        }
    }

    // output the prime numbers with spaces between them
    for (int i = 2; i <= N; i++) {
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter a limit for prime numbers (N): ";
    cin >> N;

    cout << "Prime numbers between 2 and " << N << " are: ";
    sieveoferatosthenes(N);

    return 0;
}
