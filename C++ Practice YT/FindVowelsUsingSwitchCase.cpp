// Write a program to find an alphabet is a vowel or a consonant

#include <iostream>
using namespace std;

int main () {

    char gg;
    cout<<"Input an Alphabet:";
    cin>>gg;

    switch (gg) 
    {
        case 'a' :
        cout<<"It's a vowel"<<endl;
        break;

        case 'e':
        cout<<"It's a vowel"<<endl;
        break;
    
        case 'i' :
        cout<<"It's a vowel"<<endl;
        break;

        case 'o' :
        cout<<"It's a vowel"<<endl;
        break;

        case 'u' :
        cout<<"It's a vowel"<<endl;
        break;

        default :
        cout<<"It's not a vowel"<<endl;
        break;
    }

    return 0;
}