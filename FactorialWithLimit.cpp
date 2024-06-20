
/* Write a program using C++ that inputs end/limit of loop
   and print all numbers factorial from 1 to input limit. 
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    int limit , i , j  , fact ; 

    cout<<"Enter an Positive Number : " ;
    cin>>limit ; 

    cout<<"\n"<<setw(5)<<"Number "<<setw(15)<<"Factorial\n" ; 

    for ( i = 1 ; i <= limit ; i++)
    {
        fact = 1 ;

        for( j = 1 ; j <= i ; j++)
        {
        fact = fact * j ; 
        }
    cout<<setw(3)<<i<<" ! " <<"\t\t"<<fact<<endl;

    }
    return 0 ; 
}