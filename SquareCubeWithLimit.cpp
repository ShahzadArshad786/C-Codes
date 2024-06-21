/*
    Write a Program using C++ that inputs a Number and prints Number, Square 
    and cube till input number using for loop. 
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    int limit ; 
    
    cout<<"Enter a Number  For Limit : " ; 
    cin>>limit ; 
    
    cout<<"\nNumber\t\tSquare\t\tCube"<<endl;
    
    for(int i = 1 ; i <= limit; i++)
    {
        cout<<setw(3)<<i<<setw(17)<< i * i << setw(15) << i * i * i <<endl; 
    }
    
    return 0;
}