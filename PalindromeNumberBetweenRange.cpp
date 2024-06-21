/* 
   Write a C++ program to input starting and ending limit from user and print all 
   palindrome numbers in a given range.
*/

#include<iostream>
using namespace std;
int main()
{
    int  start , end , digit , rev , i , j  ; 

    cout<<"Enter Any Starting Range : ";
    cin>> start ; 

    cout<<"Enter Any Ending Range   : ";
    cin>> end ; 
    
cout<<"\nPalindrome Numbers Between "<<start<< " and " <<end << " are  : ";
for( i = start ; i <= end ; i++ )
{
  rev = 0 ; 

    for( j = i ; j != 0 ; j = j / 10)
     {
         digit = j % 10 ; 
         rev = (rev * 10) + digit ; 
     }

   if( i == rev )
     {
         cout << i << "  ";
     }
}
    return 0 ; 
}