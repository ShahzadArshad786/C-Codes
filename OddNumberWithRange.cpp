/* 
   Write a Program using C++ that inputs starting and ending range and prints all 
   Odd numbers between input ranges.
*/

#include<iostream>
using namespace std;
int main()
{
    int start , end  ; 

    cout<<"Enter a Lower Limit  : " ;
    cin>>start ; 

    cout<<"Enter a higher Limit : " ;
    cin>>end ; 

    cout<<"Odd Numbers Between Range " << start<< " and " << end << " are : " ;

    for(int i = start ; i <= end; i++)
    {
        if( i % 2 != 0 )
    {
         cout << i << "  ";
    }
    }
    return 0 ; 
}