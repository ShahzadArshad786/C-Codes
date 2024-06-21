/*
    Write a Program using C++ that inputs a number from the user and displays a 
    table of that number using for loop. 
*/

#include <iostream>
using namespace std; 

int main()
{
    int num  ; 
    
    cout<<"Enter Any Number For Table : " ; 
    cin>> num  ; 
    
    cout<<"\nTable Of a Number "<<num<<" is as follows : \n\n";
    
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<num << " x "<< i << " = "<< num * i <<endl; 
    }
    return 0;
}