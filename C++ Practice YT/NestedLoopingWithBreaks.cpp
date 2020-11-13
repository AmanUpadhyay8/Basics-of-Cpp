#include <iostream>
using namespace std; 

int main () {

    int a;
    cout<<"Enter first Number:";
    cin>>a;
    cout<<endl;

    int b;
    cout<<"Enter Seconnd Number:";
    cin>>b;
    cout<<endl;

    
    int i;
    int c;
    for ( i = a ; i<=b ; i++) {
        for ( c = 2 ; c < i ; c++) {
            if ( i % c == 0) {
                cout<<"Not Prime:";
                cout<<i<<endl;
                break;
            }
        }
        if ( c==i ) {
            cout<<"Prime Number:";
            cout<<i<<endl;
        } 
    }
    return 0;
}