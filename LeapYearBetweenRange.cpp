/* Write a Program using C++ that inputs a starting Year and end year,
   and displays all Leap Years between given range. 
*/

#include<iostream>
using namespace std;

int main()
{
    int start_Year , end_Year , count = 0 ; 

    cout<<"Enter Any Starting Year : ";
    cin>> start_Year ; 

    cout<<"Enter Any Ending Year   : ";
    cin>> end_Year ; 

    cout<<"\nLeap Years Between "<<start_Year<< " and " <<end_Year << " are  : ";
    for(int i = start_Year ; i <= end_Year ; i++ )
    {
       if(i % 4 == 0)
       {
        cout<<i<< "  " ; 
        count = count + 1 ; 
       }
    }

    cout<<"\n\nTotal Leap Year From "<<start_Year<< " to "<<end_Year<< " are : "<<count<<endl;
    return 0 ; 
}