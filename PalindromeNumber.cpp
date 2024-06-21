/* 
   Write a C++ program to input any integer number and checks whether it is a number is a 
   palindrome or not. A palindrome is a number that reads the same backwards as forwards 
   such as 62526 and 4994. 
*/

#include<iostream>
using namespace std;
int main()
{
    int num , digit , rev = 0 ; 

    cout<<"Enter an Integer Number : " ;
    cin>>num ; 

    int n = num ; 

    for(int i = n ; i != 0 ; i = i / 10)
    {
        digit = i % 10 ; 
        rev = (rev * 10) + digit ; 
    }

    if( num == rev )
    {
         cout << num << " is a Palindrome Number "<<endl;
    }
    else 
    {
          cout << num << " is not a Palindrome Number "<<endl;
    }
    return 0 ; 
}