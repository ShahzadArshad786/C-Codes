/* 
   Write a Program using C++ that inputs any positive integer and check whether it 
   is an Even or not using IF-Else Structure. 
*/

#include<iostream>
using namespace std;
int main()
{
    int num  ; 

    cout<<"Enter an Positive Number : " ;
    cin>>num ; 

    if( num % 2 == 0 )
    {
         cout << num << " is a Even Number "<<endl;
    }
    else 
    {
          cout << num << " is not a Even Number "<<endl;
    }
    return 0 ; 
}