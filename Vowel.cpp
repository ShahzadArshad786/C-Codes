#include<iostream>
using namespace std;
int main()
{
   char ch ; 

    cout<<"Enter any Single Character : " ;
    cin>>ch ; 

    switch(ch)
    {
        case 'A':
        case 'a':
        if (ch == 'A')
        {
            cout<<ch<<" is vowel"<<endl;
        }
        else 
        {
            cout<<ch<<" is vowel"<<endl;
        }
        break ; 


        case 'E':
        case 'e':
        if (ch == 'E')
        {
            cout<<ch<<" is vowel"<<endl;
        }
        else 
        {
            cout<<ch<<" is vowel"<<endl;
        }
        break ; 

        case 'I':
        case 'i':
        if (ch == 'I')
        {
            cout<<ch<<" is vowel"<<endl;
        }
        else 
        {
            cout<<ch<<" is vowel"<<endl;
        }
        break ; 

         case 'O':
        case 'o':
        if (ch == 'O')
        {
            cout<<ch<<" is vowel"<<endl;
        }
        else 
        {
            cout<<ch<<" is vowel"<<endl;
        }
        break ; 

        case 'U':
        case 'u':
        if (ch == 'U')
        {
            cout<<ch<<" is vowel"<<endl;
        }
        else 
        {
            cout<<ch<<" is vowel"<<endl;
        }
        break ; 
        
        default:
        cout<<ch <<" is not a vowel"<<endl;
    }
    
    return 0 ; 
}