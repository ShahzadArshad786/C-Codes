/*
    Write a Program using C++ that inputs an integer and passes the number to a 
    function, it then calculates the sum of its digits and return the sum to the 
    main() function where main() function displays sum. For example the program 
    should display 15 if the use enters 12345. 
*/

#include <iostream>
using namespace std ;

int Sum_Of_Digits(int n);

int main()
{

    int num , sum ;
    
    cout<<"Enter Any Integer Number : ";
    cin>> num ;

    sum = Sum_Of_Digits(num); 
    
    cout<<"\nOriginal Number is : "<<num; 
    cout<<"\nSum Of Digits Of "<< num << " is : "<<sum;
    
    return 0;
    }

int Sum_Of_Digits ( int n )
{
    int digit , sum = 0 ; 
        
    for(int i = n ; i != 0 ; i = i / 10)
    {
        digit  = i % 10 ; 
        sum = sum + digit ; 
    } 
    
    return sum ; 
}