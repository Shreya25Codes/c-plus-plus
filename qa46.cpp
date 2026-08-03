#include <iostream>
 using namespace std;
 
 int main() 
 {
     char ch,character;
     cout<<"Enter a character:";
     cin>>character;
     if((character>='a'&& character<='z')||(character>='A'&& character<='Z'))
     {
      switch(character)
     {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<character<<" is a vowel.";
        break;
        default:
        {cout<<character<<" is consonant.";}
     }
    }
    else
    {
      cout<<"Enter valid character.";
    }
     return 0;
 } 
