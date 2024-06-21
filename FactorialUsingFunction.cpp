/* 
   Write a Program using C++ that inputs an Integer Number and passes the 
   Number to a function, that calculates the Factorial of a input number 
   and return to main() function, and then main() function prints the Factorial 
   of a Number. 

*/

#include <iostream>
using namespace std ;
 
int Factorial (int n); 

int main()
{
    int num , fact ; 
    
    cout<<"Enter Any Number : ";
    cin>> num ; 
    
    fact  = Factorial (num); 
    
    cout<<"\nFactorial of " <<num<<"! is : "<<fact<<endl; 
    
    return 0;
}

int Factorial (int n)
{
    int fact = 1 ; 
    
    for (int i = 1 ; i <= n ; i++)
    {
         fact = fact * i ; 
    }

    return fact ; 
}