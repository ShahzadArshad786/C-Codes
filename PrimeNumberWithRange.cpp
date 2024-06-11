/* Write a Program using C++ that inputs starting and ending range
   and print all Prime numbers between input range. 
*/

#include<iostream>
using namespace std;
int main()
{

   int start , end , i , j , factor  ; 

    cout<<"Enter a Lower Limit  : " ;
    cin>>start ; 

    cout<<"Enter a higher Limit : " ;
    cin>>end ; 

    cout<<"Prime Numbers Between Range " << start<< " and " << end << " are : " ;
 
    for( i = start ; i <= end ; i++)
    {
        factor = 0 ; 
        for( j = 1 ; j <= i ; j++)
        {
            if ( i % j == 0 )
        {
             factor = factor + 1 ;  
        }
    }
    if(factor == 2 )
    {
        cout<<i<< " " ; 
    }   
    }
    return 0 ; 
}