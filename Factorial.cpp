/* 
   Write a Program using C++ that inputs any positive integer and print its factorial 
   using for loop. 
*/

#include<iostream>
using namespace std;
int main()
{

    int num , fact = 1 ; 

    cout<<"Enter an Positive Number : " ;
    cin>>num ; 

    for(int i = 1 ; i <= num ; i++)
    {
        fact = fact * i ; 
    }

    cout<<"Factorial of " << num << " is : "<<fact<<endl;
    return 0 ; 
}