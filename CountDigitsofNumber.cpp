/* Write a Program using C++ that inputs any positive integer,
   count the number of Digits in a given integer. 
*/

#include<iostream>
using namespace std;

int main()
{
    int num , count ; 
    count = 0 ; 

    cout<<"Enter Any Integer Number : ";
    cin>> num ; 

    for(int i = num ; i != 0 ; i = i / 10 )
    {
        count = count + 1 ; 
    }

    cout<<"\nTotal Digits of a " <<num<< "  Number are : "<< count<<endl; 
    return 0 ; 
}