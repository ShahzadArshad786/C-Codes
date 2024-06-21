/* 
   Write a Program using C++ that inputs any single character using keyboard and 
   checks whether it is a vowel or not using switch Structure. 
*/

#include<iostream>
using namespace std;
int main()
{
   char ch , vowel ; 

    cout<<"Enter any Single Character : " ;
    cin>>ch ; 

    switch(ch)
    {
        case 'A':
        case 'a':

        vowel = ch ; 
        cout<<vowel<<" is a vowel"<<endl;
        
        break ; 

        case 'E':
        case 'e':

        vowel = ch ; 
        cout<<vowel<<" is a vowel"<<endl;

        break ; 

        case 'I':
        case 'i':
        
        vowel = ch ; 
        cout<<vowel<<" is a vowel"<<endl;

        break ; 

        case 'O':
        case 'o':
        
        vowel = ch ; 
        cout<<vowel<<" is a vowel"<<endl;

        break ; 

        case 'U':
        case 'u':
        
        vowel = ch ; 
        cout<<vowel<<" is a vowel"<<endl;
        break ; 
        
        default:
        cout<<ch <<" is not a vowel"<<endl;
    }
    return 0 ; 
}