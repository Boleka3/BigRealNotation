// File: A2_S23_20221119_6(A).cpp
// Purpose:entering a +ve number and turning it into an binary number.
// Author: mohammed gamal abd el nasser Atteya
// Section: S23
// ID: 20221119
// TA:
// Date: 27 Oct 2023
#include <iostream>

void BinaryNumber(int num)
{
    if (num > 0)    //making sure it is a +ve numb
    {
        BinaryNumber(num/2);
        std::cout<<num % 2; //0 or 1 is printed depending on num current value.
    } else if (num== 0)
    {
        std::cout<<0;
    }
    else
        std::cout<<"wrong input only +ve numbers are allowed"<<std::endl;   //in case of -ve numbers.
}

int main() {
    int num;
    std::cout<<"enter a number to transform into binary : ";
    std::cin>>num;
    BinaryNumber(num); //calling the function to work.
}
