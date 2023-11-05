// File: A2_S23_20221119_12.cpp
// Purpose:finding phishing words in a .txt file
// Author: mohammed gamal abd el nasser Atteya
// Section: S23
// ID: 20221119
// TA: Mohamed Talaat Saad
// Date: 29 Oct 2023
#include <iostream>
#include <map>
#include <string>
#include <fstream>
using std::string;
//didnt use (using std::cout/cin/map/etc..) to avoid namespace pollution
//used it for string just cuz i used it alot and i want it to not look messy ya3ni

std::map<string,int> phishingTerms= //map to store terms
 {  //possible phishing terms from Google and from my own experience
         {"free netflix pass",3},
         {"click here to download",1},
         {"credit card",3},
         {"account",2},
         {"bank",2},
         {"verify",2},
         {"password",3},    //each term is assigned with the number of points its likely to be a phishing term
         {"urgent",2},
         {"social security",3},
         {"winner",2},
         {"click",1},
         {"account suspended",3},
         {"discount",1},
         {"free",1},
         {"limited time",2},
         {"update",2},
         {"confirm your identity",3},
         {"prize",2},
         {"unsubscribe",1},
         {"earn money fast",3},
         {"online pharmacy",3},
         {"exclusive deal",2},
         {"lottery",2},
         {"secret",2},
         {"send us your verification code",2},
         {"million dollars",3},
         {"claim ur gift",2},
         {"u won a free ",1},
         {"click here for free windows defender ",2},
 };
int main()
{
    string filename;
    std::cout<<"Enter files name to check for phishing: ";
    std::cin>>filename;

    std::ifstream file(filename);
    if (!file)
    {
        std::cerr<<"error couldnt open file"<<std::endl;    //cerr is a best practice preffered than cout for error mesgs.
        return 1;
    }
    string text,line; //text is for whole content and line is just for the current line ya3ni lol
    while (std::getline(file, line))
    {
        text += line + '\n'; //each line is added to the text and using \n to read each individualy
    }
    std::map<string, int> termCounts;//store each point then later entered to total points
    int totalPoints = 0;

    for (const auto& termValue : phishingTerms)
    {
        const string& term = termValue.first;
        int points = termValue.second;
        size_t pos = 0; //for the size of array
        while ((pos = text.find(term, pos)) != string::npos)//npos means not found incase he didnt find a phishing phrase
        {
            totalPoints += points;
            termCounts[term]++;
            pos += term.length();
        }
    }
    file.close();

    std::cout<<"Phishing terms found in the input text:"<<std::endl;
    for(const auto& termCount:termCounts)
    {
        std::cout<<termCount.first <<": "<<termCount.second<<"points"<<std::endl;
    }
    std::cout << "total points in file:"<<totalPoints<<"points"<<std::endl;
}
