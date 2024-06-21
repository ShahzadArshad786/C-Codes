/*
    Write a Program using C++ that inputs two numbers in main () and passes them 
    to a function. The function calculates the power of first number raised to the 
    power of second number, and return calculated power to the main() function. 
    For example if the user enters 2 and 4 it displays 16. 
*/

#include <iostream>
using namespace std ;

int Power ( int base , int exp);

int main() 
{
    int base, exp , pow ; 

    cout<<"Enter Integer Value For Base     : ";
    cin>> base ; 

    cout<<"Enter Integer Value For Exponent : ";
    cin>> exp  ; 
    pow = Power (base , exp);

    cout<<"\n"<<base<<" ^ "<< exp << " is : "<<pow<<endl; 
    return 0;
}

int Power ( int base , int exp)
{
    int pow = 1 ; 

    for (int i = 1 ; i <= exp ; i++)
    {
        pow = pow * base ;  
    }

    return pow ; 
}