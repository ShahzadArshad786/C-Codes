/* Write a Program using C++ that inputs any Year,
   and display whether it is a leap year or not. 
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