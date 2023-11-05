// File: A2_S23_20221119_3.cpp
// Purpose: implement the function split so that it returns a vector of the strings in target that are separated by the string delimiter.
// Author: mohammed gamal abd el nasser Atteya
// Section: S23
// ID: 20221119
// TA: Mohamed Talaat Saad
// Date: 27 Oct 2023
#include <iostream>
#include <vector>
using std::string;  //so i don't  write std:: before string.
using std::vector;  //so i don't  write std:: before vector.

vector<string> split(string target, string delimiter) {
    vector<string> result;
    string tmp;
    for (int i = 0; i < target.length(); ++i) { //.length for number of characters.
        if (target[i] != delimiter[0])
        {
            tmp += target[i];
            if (i == target.length() - 1)
            {
                result.push_back(tmp);  //if this is the last char in this word it will be pushed to result.
            }
        } else if (target[i] == delimiter[0])
        {
            result.push_back(tmp);  //if it reaches the delimiter it will stop and makes the tmp empty
            tmp="";
        }
    }
    return result;
}
int main() {
    string target,delimiter;    //defining...
    std::cout << "Enter ur string: " ;
    getline(std::cin, target);  //input characters.
    std::cout << "enter delimiter: " ;
    getline(std::cin, delimiter);   //input delimiter.
    vector<string> result=split(target,delimiter);  //storing value in result..
    for(int i = 0; i < result.size();++i)
    {
        std::cout << result[i] <<" ";   // output.
    }
    return 0;
}
