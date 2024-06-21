/* 
   Write a Program using C++ that inputs any integer number and print all factors 
   of that number. 
*/

#include<iostream>
using namespace std;
int main()
{

   int i , num   ; 

    cout<<"Enter an Integer Number : " ;
    cin>>num ; 

    cout<<"\nFactors of Given Number " << num<< " are : " ;
 
    for( i = 1 ; i <= num ; i++)
    {
        if ( num % i == 0 )
        {
            cout<<i<< "  " ; 
        }
    }
    
    return 0 ; 
}