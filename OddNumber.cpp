/* 
   Write a Program using C++ that inputs any positive integer number and check 
   whether it is Odd or not using if else structure. 
*/

#include<iostream>
using namespace std;
int main()
{
    int num  ; 

    cout<<"Enter an Positive Number : " ;
    cin>>num ; 

    if( num % 2 != 0 )
    {
         cout << num << " is a Odd Number "<<endl;
    }
    else 
    {
          cout << num << " is not a Odd Number "<<endl;
    }
    return 0 ; 
}