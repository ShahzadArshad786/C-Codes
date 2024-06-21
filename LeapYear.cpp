/* 
   Write a Program using C++ that inputs any year, and checks whether it is a leap 
   year or not using if else structure. 
*/

#include<iostream>
using namespace std;

int main()
{
    int year ;

    cout<<"Enter Any Year : ";
    cin>> year ; 

    if(year % 4 == 0)
    {
        cout<<"\n"<<year<<"  is a Leap Year" ; 
    }

    else 
    {
        cout<<"\n"<<year<<"  is not a Leap Year" ; 
    }
    return 0 ; 
}