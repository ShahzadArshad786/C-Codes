/* 
   Write a Program using C++ that inputs any positive integer and print whether it 
   is prime or not using for loop. 
*/

#include<iostream>
using namespace std;
int main()
{

    int num , factor = 0 ; 

    cout<<"Enter an Positive Number : " ;
    cin>>num ; 
 
    for(int i = 1 ; i <= num ; i++)
    {
        if ( num % i == 0 )
        {
             factor = factor + 1 ;  
        }
    }

    if( factor == 2)
    {
        cout<<"\n"<< num << " is a Prime Number"<<endl; 
    }
    else
    {
        cout<<"\n"<< num << " is not a Prime Number"<<endl; 
    }
    return 0 ; 
}