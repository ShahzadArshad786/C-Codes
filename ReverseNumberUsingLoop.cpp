/* Write a Program using C++ that inputs any Number ,
   and displays all Leap Years between given range. 
*/

#include <iostream>
using namespace std ;

int main()
{
 
    int num , digit , rev = 0 ; 
    
    cout<<"Enter Any Number : ";
    cin>> num ; 
    
    for (int i = num ; i != 0 ; i = i / 10)
    {
        digit = i % 10 ;
        rev = (rev * 10) + digit ; 
    }
    
    cout<<"\nOriginal Number is : "<<num<<endl; 
    
    cout<<"\nReverse  Number is : "<<rev<<endl; 
    
    return 0;
}