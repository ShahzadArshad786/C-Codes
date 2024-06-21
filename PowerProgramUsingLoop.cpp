/*
    Write a Program using C++ that gets two numbers base and exponent from the 
    user and displays the result of first number raised to the power of second 
    number using for loop. 
*/

#include <iostream>
using namespace std ; 

int main() 
{
    int base, exp , pow = 1 ; 

    cout<<"Enter Integer Value For Base     : ";
    cin>> base ; 

    cout<<"Enter Integer Value For Exponent : ";
    cin>> exp  ; 

    for (int i = 1 ; i <= exp ; i++)
    {
        pow = pow * base ;  
    }

    cout<<"\n"<<base<<" ^ "<< exp << " is : "<<pow<<endl; 

    return 0;
}