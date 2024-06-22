/*
    Write a Program using C++ that inputs a string and find the length of string 
    using loop. 
*/
#include <iostream>
#include <string>
using namespace std ;

int main() 
{
    string str ;
    cout<<"Enter Any String : ";
    getline(cin, str ); 

    int count = 0 ; 

    for ( int i = 0 ; str[i] != '\0' ; i++)
    {
        count++ ; 
    }

    cout<<"\nYou Entered a String   : "<<str<<endl;
    cout<<"\nLength of String is    : "<<count<<endl; 
    return 0;
}