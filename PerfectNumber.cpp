/* Write a C++ program to input any integer number and check whether a number is a Perfect or not.
   A perfect number is a number that is numerically equal to the sum of its divisors exculsing  number itself.
   For example, 6 is a perfect number because the divisors of 6 are 1, 2, 3 and 
   1 + 2 + 3 = 6. 
*/

#include<iostream>
using namespace std;
int main()
{
    int num , sum = 0  ; 

    cout<<"Enter an Integer Number : " ;
    cin>>num ; 

    for(int i = 1 ; i < num ; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i ; 
        } 
    }

    if( num == sum )
    {
         cout << num << " is a Perfect Number "<<endl;
    }
    else 
    {
          cout << num << " is not a Perfect Number "<<endl;
    }
    return 0 ; 
}