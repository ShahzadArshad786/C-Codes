/* 
   Write a Program using C++ that inputs any positive integer number and print 
   each digit of input number on the separate lines.  
*/

#include <iostream>
using namespace std ;

int main()
{
    int num , j , digit ,  k ; 
    
    j = 0 ; 
    k = 1 ; 
 
    cout<<"Enter Any Number : ";
    cin>> num ; 
 
    int n = num ; 
    // convert number into string
    string str = to_string(n) ; 

    // find string length 
    int length = str.length(); 

    // declare arr with equal size of length of number 
    int arr[length] ;

    for (int i = num ; i != 0 ; i = i / 10)
    {
        digit = i % 10 ;
        arr[j] = digit ; 
        j++ ; 
    }
 
    cout <<"\nDigits of a Number "<<n<< " are : \n\n"; 

    for(int i = j - 1 ; i >= 0 ; i--)
    {
        cout<<"Digit "<<k<< " : "<<arr[i]<<endl; 
        k++ ; 
    }
    return 0;
}