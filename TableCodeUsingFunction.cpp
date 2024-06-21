/*
    Write a Program using C++ that inputs a number from the user and passes the 
    number to a Table() function then it displays a table of that number using 
    for loop. 
*/

#include <iostream>
using namespace std; 

void PrintTable ( int n );

int main()
{
    int num  ; 
    
    cout<<"Enter Any Number For Table : " ; 
    cin>> num  ; 
    
    PrintTable(num); 
    
    return 0;
}

void PrintTable ( int n )
{
  
    cout<<"\nTable Of a Number "<<n<<" is as follows : \n\n";
    
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<< n << " x "<< i << " = "<< n * i <<endl; 
    }  
}