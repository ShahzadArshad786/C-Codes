/* 
   Write a Program using C++ that inputs a Positive Number and Reverse it. For 
   Example if the user enters 2765, the function should reverse it so that it 
   becomes 5672.  
*/

#include <iostream>
using namespace std ;

int main()
{
 
    int num , digit , rev = 0 ; 
    
    cout<<"Enter Any Number : ";
    cin>> num ; 
    
    for (int i = num ; i != 0 ; i = i / 10)
    {
        digit = i % 10 ;
        rev = (rev * 10) + digit ; 
    }
    
    cout<<"\nOriginal Number is : "<<num<<endl; 
    
    cout<<"\nReverse  Number is : "<<rev<<endl; 
    
    return 0;
}