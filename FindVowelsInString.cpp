/*
    Write a Program using C++ that inputs a string and find the total number of 
    vowels in a string.  
*/

#include <iostream>
#include<string>
using namespace std ;

int main() 
{
    string str ;
    cout<<"Enter Any String : ";
    getline(cin, str) ; 

    int count = 0 ; 
    for ( int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == 'A' || str[i] == 'a' ||
        str[i] == 'E' || str[i] == 'e' ||
        str[i] == 'I' || str[i] == 'i' ||
        str[i] == 'O' || str[i] == 'o' ||
        str[i] == 'U' || str[i] == 'u')
        {
            count++ ; 
        }   
    }

    cout<<"\nYou Entered a String : "<<str<<endl;
    cout<<"Total Vowels in a String are : " <<count<<endl; 
    return 0;
}