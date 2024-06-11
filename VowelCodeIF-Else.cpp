
/* Write a Program using C++ that inputs any single character using keyboard
   and print whether it is vowel or not using IF-Else Structure. 
*/

#include<iostream>
using namespace std;
int main()
{
   char ch , vowel ; 

    cout<<"Enter any Single Character : " ;
    cin>>ch ; 

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || 
       ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || 
       ch == 'U' || ch == 'u')
        {
            cout<<ch <<" is a vowel"<<endl;
        }
    else 
        {   
            cout<<ch <<" is not a vowel"<<endl;
        }
        
    return 0 ; 
}