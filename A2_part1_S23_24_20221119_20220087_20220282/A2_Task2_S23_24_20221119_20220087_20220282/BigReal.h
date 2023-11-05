// FCAI-OOP-2023-Assignment 2 part 1.
// Program Name: BigReal
// Program Description: Apply operators on big real numbers
// Last Modification Date: 11/5/2023
// ID : Mohammed gamal abd el nasser / 20221119
// ID : belal mohammed younis / 20220087
// ID : mohammed islam khaled / 20220282
// Under The Supervision of: Dr. Mohamed El-Ramly
// TA: Eng Mohammed Talaat Saad
#ifndef JIMMY_BIGREAL_H
#define JIMMY_BIGREAL_H
#include <string>

using namespace std;

class BigReal{
private:
    bool dot;
    char sign = '+';
    string integer ,fraction;

public:
    static bool isValid(const string& real);
    BigReal();
    explicit BigReal(string real);
    bool operator< (BigReal& nextReal);
    bool operator> (BigReal& anotherReal);
    bool operator== (BigReal& nextReal);
    BigReal operator+ (BigReal& other);
    void padding(BigReal& other);
    BigReal operator- (BigReal& other);
    friend ostream& operator << (ostream& out, const BigReal& num);
    friend istream& operator >> (istream& in, BigReal& num);



};

#endif //JIMMY_BIGREAL_H
