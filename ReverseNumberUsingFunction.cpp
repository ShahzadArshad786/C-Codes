/* 
    Write a Program using C++ that inputs a Positive Number and Reverse it. Write a function Reverse () 
    to reverse the number. For Example if the user enters 2765, the function should reverse it so that 
    it becomes 5672. The Reverse () function should accept the number as an input parameter and return 
    the reverse number.
*/

#include <iostream>
using namespace std ;

int Reverse (int n); 

    int main()
    {
    
    int num , rev  ; 
    
    cout<<"Enter Any Number : ";
    cin>> num ; 
    
    rev = Reverse (num); 
    
    cout<<"\nOriginal Number is : "<<num<<endl; 
    
    cout<<"\nReverse  Number is : "<<rev<<endl; 
    
    return 0;
    }

    int Reverse (int n)
    {
        int digit , rev = 0 ; 
    
        for (int i = n ; i != 0 ; i = i / 10)
        {
            digit = i % 10 ;
            rev = (rev * 10) + digit ; 
        }
    return rev ; 
    }