/* 
   Write a Program using C++ that inputs a Positive Number as starting and ending 
   range. It then displays the sum of all odd numbers and sum of all even numbers 
   between given range. 
*/

#include <iostream>
using namespace std ;

int main()
{
    int start , end ;
    int evensum = 0 , oddsum = 0 ;
    
    cout<<"Enter Any Number For Starting Range : ";
    cin>> start ;

    cout<<"Enter Any Number For Ending   Range : ";
    cin>> end ; 
 
    for (int i = start ; i <= end ; i++)
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
  cout<<"\nSum Of Even Numbers From "<< start << " to " << end << " is : "<<evensum;
  cout<<"\nSum Of Odd  Numbers From "<< start << " to " << end << " is : "<<oddsum;
   
  return 0;
}