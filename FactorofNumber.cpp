/* Write a Program using C++ that inputs any integer number
   and print all Factors of that number. 
*/

#include<iostream>
using namespace std;
int main()
{

   int i , num   ; 

    cout<<"Enter an Integer Number : " ;
    cin>>num ; 

    cout<<"Factors of " << num<< " are : " ;
 
    for( i = 1 ; i <= num ; i++)
    {
        if ( num % i == 0 )
        {
            cout<<i<< "  " ; 
        }
    }
    
    return 0 ; 
}