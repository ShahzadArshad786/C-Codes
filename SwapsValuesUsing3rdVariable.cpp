/*
    Write a Program using C++ that inputs two Numbers, swaps the values using 
    third variable and then display the values before and after swapping. 
*/

#include <iostream>
using namespace std; 

int main()
{

    int x , y , temp = 0 ; 
    
    cout<<"Enter Integer Value For X : " ; 
    cin>> x  ; 
    
    cout<<"Enter Integer Value For Y : " ; 
    cin>> y  ; 
    
    cout<<"\nValues Before Swapping \n\n" ;
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
    
    temp  =  x ;
    x     =  y ;
    y     =  temp ; 
    cout<<"\nValues After  Swapping \n\n" ;
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
    
    return 0;
}