/* 
  Write a Program using C++ that inputs a Positive Number as starting and ending
  limit. Then passes the start and end limit values to a function as an arguments. 
  The function then displays the sum of all odd numbers and sum of all even numbers 
  between given range. 
*/

#include <iostream>
using namespace std ;

void EvenOddSum (int x , int y); 

int main()
{
 
 int start , end ; 
 
 cout<<"Enter Any Number For Starting Range : ";
 cin>> start ;

 cout<<"Enter Any Number For Ending   Range : ";
 cin>> end ; 
 
 EvenOddSum (start , end); 

 return 0;
}

void EvenOddSum (int x , int y)
{
    int evensum = 0 , oddsum = 0 ; 
  
    for (int i = x ; i <= y ; i++)
    {
        if(i % 2 == 0) 
        {
            evensum = evensum + i ; 
        }
        else 
        {
            oddsum = oddsum + i ; 
        }
    }
 
 cout<<"\nSum Of Even Numbers From "<< x << " to " << y << " is : "<<evensum;
 
 cout<<"\nSum Of Odd  Numbers From "<< x << " to " << y << " is : "<<oddsum;
   
}