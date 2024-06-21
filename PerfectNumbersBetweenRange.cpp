/* 
   Write a C++ program to input starting and ending range/limit and prints all 
   Perfect Numbers between given Range.
*/

#include<iostream>
using namespace std;
int main()
{
    int start , end , sum , i , j ; 

    cout<<"Enter Any Starting Range : ";
    cin>> start ; 

    cout<<"Enter Any Ending Range   : ";
    cin>> end ; 

    cout<<"\nPerfect Numbers Between "<<start<< " and " <<end << " are  : ";
    
    for(i = start ; i <= end ; i++)
    {
        sum = 0 ; 
        for( j = 1 ; j < i ; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j; 
            } 
        }
        if( i == sum )
        {
            cout << i << "  ";
        }
    }
    return 0 ; 
}