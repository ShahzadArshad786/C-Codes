/*
    Write a Program using C++ that inputs a string and find the total number of 
    words in a string.  
*/

#include <iostream>
#include<string>
using namespace std ;

int main() 
{
    string str ;
    cout<<"Enter Any String : ";
    getline(cin, str) ; 

    int words = 0 ; 
    for ( int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == ' ')
        {
            words++; 
        }
    }
    cout<<"\nOriginal String is : "<<str<<endl;
    cout<<"Total Number of Words in a String are : " <<words + 1 <<endl; 
    return 0;
}