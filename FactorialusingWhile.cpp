/* Write a Program using C++ that inputs any positive integer
   and print its factorial using while loop. 
*/

#include<iostream>
using namespace std;
int main()
{
    int num , s ,  fact = 1 ; 

    cout<<"Enter an Positive Number : " ;
    cin>>num ; 

    s = 1 ; 
    while( s <= num )
    {
        fact = fact * s ; 
        s = s + 1 ; 
    }

    cout<<"Factorial of " << num << " is : "<<fact<<endl;
    return 0 ; 
}