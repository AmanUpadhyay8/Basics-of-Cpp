#include <iostream>
using namespace std;

int main () {

    int money = 3000 ;
    for ( int date = 1 ; date<=30 ; date++) {

        if ( date % 2 == 0 ) {
            continue ; 
        }
        if ( money==0 ) {     
            cout<<"You cannot go out you don't have any money left\n"; 
            break;
        }
        cout<<"You can go out Today\n";
        cout<<"The date is "<<date<<endl;
        cout<<"Money you have is "<<money<<endl;
        money = money - 300;
    }

}