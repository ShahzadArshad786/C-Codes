/*
 Write a Program using C++ that inputs an integer and displays sum of its digits. 
 For example the program should display 9 if the use enters 135. 
*/

#include <iostream>
using namespace std ;

int main()
{
 
 int num , digit , sum = 0 ;
 
 cout<<"Enter Any Integer Number : ";
 cin>> num ;

 int n = num ; 
 
   for (int i = num ; i != 0 ; i = i / 10)
   {

    digit  = i % 10 ; 
    sum = sum + digit ; 
   }

    cout<<"\nOriginal Number is : "<<n; 
    cout<<"\nSum Of Digits Of "<< n << " is : "<<sum;
   
    return 0;
}