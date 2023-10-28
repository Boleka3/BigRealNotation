// File: A2_S23_20221119_9.cpp
// Purpose:entering a number of bears and checking if i can give back some with some conditions.
// Author: mohammed gamal abd el nasser Atteya
// Section: S23
// ID: 20221119
// TA:
// Date: 28 Oct 2023
#include <iostream>

bool bears(int n)
{
    if(n==42)    //42 bears = true
    {
        return true;
    }
    if(n %2==0 && bears(n/2))  //if n is even then we divide bears by 2.
    {
        return true;
    }
    int lastNumber=n % 10;    //last number value
    int BeforeLast=(n % 100)/10;  //before last number value
    int newN=n-(lastNumber * BeforeLast); //new bears number are old ones - last*before last number.

    if ((n%3==0 || n%4==0) && newN>0 && bears(newN))
    {
        return true;        //if they are divisable by 3 or 4 then newN is now valid
    }
    if (n%5==0 && bears(n-42))
    {
        return true;    //if u can dividee n by 5 then u remove 42 bears
    }
    return false;   //in case no condition was true
}
int main() {
    int n;
    std::cout<<"enter bears number: ";
    std::cin>>n;
    if (bears(n))   //if true
    {
        std::cout <<"True"<<std::endl;
    } else {
        std::cout<<"False"<<std::endl;
    }
}
